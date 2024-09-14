#include <string.h>

#include "../include/constants.h"
#include "../include/insertionSort.h"

void insertionSort (password *array, int size){
    for (int i = size - 1; i >= 0; --i){
        for (int j = i; j < size - 1; ++j){
            if(strcmp(array[j].value, array[j + 1].value) > 0){
                password aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            } else break;
        }
    }  
}