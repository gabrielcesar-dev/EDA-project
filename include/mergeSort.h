#ifndef MERGE_SORT_H
#define MERGE_SORT_H

struct password;

extern void arrayCopy(struct password *src, struct password *dest, const int start, const int end);

extern void mergeSort(struct password *array, int size);

extern void mergeSortHelper(struct password *array, const int left, const int right);
   
#endif