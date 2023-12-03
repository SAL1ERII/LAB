#include <stdio.h>
#include <stdlib.h>
#include "Array_output.h"

int* Array_output(int *array, int *num_of_elements)
{
    if(*num_of_elements == 0)
    {
        printf("Your array is free");
        return array;
    }

    printf("Your array: ");
    for (int i = 0; i < *num_of_elements; i++)
    {
        if (i != 0){
            printf(", ");
        }
        printf("[%d]", array[i]);
    }
    return array;
}