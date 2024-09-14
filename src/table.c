#include <stdio.h>
#include "../include/constants.h"
#include "../include/algorithmus.h"

void tableHeader(int cols) {
    printf("+");
    for (int i = 0; i < cols; ++i) {
        fprintf(stdout, "-----------------+");
    }
    printf("\n");
}

void tableRow(int rows, int cols, const double data, const char *algorithm) {
    fprintf(stdout, "|");
    fprintf(stdout, "%-17s|", algorithm);
    fprintf(stdout, "%-15.6fms|", data);

    printf("\n+");

    for (int j = 0; j < cols; ++j) {
        fprintf(stdout, "-----------------+");
    }
    printf("\n");

}