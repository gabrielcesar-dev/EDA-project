#include <stdlib.h>

#include "../include/constants.h"
#include "../include/input.h"

void fopenHandler(FILE *file){
  if (file == NULL) {
    perror("Error could not open the file");
    exit(EXIT_FAILURE);
  }
}

void mallocHandler(password *lines) {
    if (lines == NULL) {
      perror("Error allocating memory");
      exit(EXIT_FAILURE);
  }
}

int countLines(FILE *file){
    int size = 0;
    char buffer;
    
    while ((buffer = fgetc(file)) != EOF) 
    if (buffer == '\n') size++;

    fseek(file, 0, SEEK_SET);

    return size;
}

password* input(FILE *file) {
    int size = countLines(file);

    password *lines = malloc(size * sizeof(password));

    mallocHandler(lines);

    for(int i = 0; i < size; i++){
    fscanf(file, "%i", &lines[i].length);
    lines[i].value = malloc((lines[i].length + 1) * sizeof(char));

    fscanf(file, "%i", &lines[i].frequency);

    fscanf(file, "%s", lines[i].value);
    }

    fseek(file, 0, SEEK_SET);

    return lines;
}