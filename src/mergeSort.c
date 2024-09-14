#include <string.h>
#include <stdlib.h>

#include "../include/mergeSort.h"
#include "../include/input.h"
#include "../include/constants.h"


void arrayCopy(password *src, password *dest, const int start, const int end) {
    for (int i = start; i <= end; ++i) dest[i - start] = src[i];
}

void merge(password *array, const int start, const int end) {
    int middle = (start + end) / 2;
    int leftSize = middle - start + 1;
    int rightSize = end - middle;

    password *left = malloc(sizeof(password) * leftSize);
    mallocHandler(left);    
    password *right = malloc(sizeof(password) * rightSize);
    mallocHandler(right);

    arrayCopy(array, left, start, middle);
    arrayCopy(array, right, middle + 1, end);

    int i = 0;
    int j = 0;
    int k = start;

    while (i < leftSize && j < rightSize) {
        if (strcmp(left[i].value, right[j].value) <= 0) {
            array[k++] = left[i++];
        } else {
            array[k++] = right[j++];
        }
    }

    while (i < leftSize) {
        array[k++] = left[i++];
    }

    while (j < rightSize) {
        array[k++] = right[j++];
    }

    free(left);
    free(right);
}

void mergeSortHelper(password *array, const int left, const int right) {
    if (left >= right) return;
    
    int middle = (left + right) / 2;

    mergeSortHelper(array, left, middle);
    mergeSortHelper(array, middle + 1, right);

    merge(array, left, right);
}

void mergeSort(password *array, int size) {
    mergeSortHelper(array, 0, size - 1);
}
