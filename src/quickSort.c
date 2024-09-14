#include <string.h>

#include "../include/constants.h"
#include "../include/quickSort.h"

int partition(password *array, int start, int end)
{
    password pivot = array[end];
    int i = start - 1;
    for (int j = start; j <= end; ++j)
    {
        if (strcmp(array[j].value, pivot.value) < 0)
        {
            password temp = array[j];
            array[j] = array[++i];
            array[i] = temp;
        }
    }

    password temp = array[++i];
    array[i] = array[end];
    array[end] = temp;

    return i;
}

void quickSortHelper(password *array, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int pivot = partition(array, start, end);

    quickSortHelper(array, start, pivot - 1);
    quickSortHelper(array, pivot + 1, end);
}

void quickSort(password *array, int size){
    quickSortHelper(array, 0, size - 1);
}

