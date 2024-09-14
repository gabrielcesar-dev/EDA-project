#include <string.h>

#include "../include/constants.h"
#include "../include/selectionSort.h"

void selectionSort (password *array, int size) {
    for (int i = size - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++){
            if (strcmp(array[j].value, array[i].value) > 0){
                password aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}