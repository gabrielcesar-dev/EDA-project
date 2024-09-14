#include <stdio.h>
#include <time.h>
#include <sys/time.h>

#include "../include/constants.h"
#include "../include/timer.h"

double executionTime (void (*function)(password*, int), password *array, int size) {
    struct timespec now;
    struct timespec end;

    clock_gettime(CLOCK_MONOTONIC, &now);

    function(array, size);

    clock_gettime(CLOCK_MONOTONIC, &end);

    return (double) (end.tv_sec - now.tv_sec) * 1e3 + (end.tv_nsec - now.tv_nsec) / 1e6; 
}
