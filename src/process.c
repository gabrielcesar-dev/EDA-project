#include <stdlib.h>
#include <stdio.h>

#include "../include/process.h"
#include "../include/constants.h"
#include "../include/algorithmus.h"
#include "../include/timer.h"
#include "../include/table.h"

void processHandler (int pid, password *array, algorithm process, int sizeLines) {
    if (pid == CHIELD){
        tableRow(1, 2, executionTime(process.function, array, sizeLines), process.name);

        free(array);

        exit(1);
    } 
    else if (pid < 0) {
        perror("fork fail");
        exit(1);
    }

}