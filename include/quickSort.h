#ifndef QUICK_SORT_H
#define QUICK_SORT_H

struct password;

extern int partition(struct password  *array, int start, int end);
extern void quickSort(struct password  *array, int size);
extern void quickSortHelper(struct password  *array, int start, int end);

#endif 