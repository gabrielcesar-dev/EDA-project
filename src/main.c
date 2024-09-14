#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#include "../include/constants.h"
#include "../include/input.h"
#include "../include/algorithmus.h"
#include "../include/table.h"
#include "../include/process.h"


int main (int argc, char **argv) {
  FILE * file;

  if (argc == 1) file = fopen(INPUT_FILE, "r");
  else file = fopen(argv[1], "r");

  fopenHandler(file);

  int sizeLines = countLines(file);
  password *array = input(file);

  tableHeader(2);


  for (int i = 0; i < SIZE_ALGORITHMUS; i++) {
    pid_t pid = fork();

    processHandler(pid, array, algorithmus[i], sizeLines);
  }
  
  for (int i = 0; i < SIZE_ALGORITHMUS; i++) {
    wait(NULL);
  }

  free(array);

  fclose(file);

  return 0;
}
