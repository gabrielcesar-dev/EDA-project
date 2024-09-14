#include <string.h>

#include "../include/constants.h"
#include "../include/heapSort.h"

void heapfy(password *array, int size, int node)
{
    int largest = node;
    int left = node * 2 + 1;
    int right = node * 2 + 2;

    if (left < size && strcmp(array[left].value, array[largest].value) > 0)
    {
        largest = left;
    }

    if (right < size && strcmp(array[right].value, array[largest].value) > 0)
    {
        largest = right;
    }

    if (largest != node)
    {
        password aux = array[node];
        array[node] = array[largest];
        array[largest] = aux;
        heapfy(array, size, largest);
    }
}

void heapSort(password *array, int size)
{
    for (int i = size / 2 - 1; i >= 0; --i)
    {
        heapfy(array, size, i);
    }

    for (int i = size - 1; i > 0; --i)
    {
        password aux = array[0];
        array[0] = array[i];
        array[i] = aux;

        heapfy(array, i, 0);
    }
}
