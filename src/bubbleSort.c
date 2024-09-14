#include <string.h>
#include <stdbool.h>

#include "../include/constants.h"
#include "../include/bubbleSort.h"

void BubbleSort(password *array, int size){
    bool flag = true;

    for (int i = size - 1; i >= 0 && flag; --i){
        flag = false;

        for (int j = 0; j < i; ++j){
            if(strcmp(array[j].value, array[j + 1].value) > 0){
                password aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
                flag = true;
            }
        }
    }
}