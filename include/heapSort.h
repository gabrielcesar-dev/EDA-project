#ifndef HEAP_SORT_H
#define HEAP_SORT_H

#define ROOT 0

struct password;

extern void heapSort(struct password  *array, int size);
extern void heapfy(struct password  *array, int size, int node);

#endif