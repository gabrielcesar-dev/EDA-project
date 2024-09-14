#include "../include/algorithmus.h"
#include "../include/constants.h"
#include "../include/bubbleSort.h"
#include "../include/insertionSort.h"
#include "../include/selectionSort.h"
#include "../include/heapSort.h"
#include "../include/quickSort.h"
#include "../include/mergeSort.h"

const algorithm algorithmus[] = {
  {.name="bubbleSort", .function=BubbleSort},
  {.name="insertionSort", .function=insertionSort},
  {.name="selectionSort", .function=selectionSort},
  {.name="mergeSort", .function=mergeSort},
  {.name="heapSort", .function=heapSort},
  {.name="quickSort", .function=quickSort},
};

const int SIZE_ALGORITHMUS = (sizeof(algorithmus) / sizeof(algorithmus[0]));