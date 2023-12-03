#include <stdio.h>
#include <stdlib.h>
#include "Individual_task.h"

int* Individual_task(int *array, int *num_of_elements)
{
    if(*num_of_elements == 0)
    {
        printf("Your array is free");
        return array;
    }
    int buffer = -9999;
    int num;
    int check = 1;
    int num_of_elements2 = 0;
    int* array2;
    array2 = (int*)malloc((num_of_elements2) * sizeof(int));

    for (int i = 0; i < *num_of_elements; i++)
    {
        int copy;
        copy = array[i];
        if(copy < 0){
            buffer = 9999;
        }
        while(copy != 0)
        {
            num = copy % 10;
            copy = copy / 10;
            if(copy >= 0 && num >= 0) {
                if (num > buffer) {
                    check++;
                } else {
                    check = 0;
                    break;
                }
            }
            else if (copy <= 0){
                if (num < buffer) {
                    check++;
                } else {
                    check = 0;
                    break;
                }
            }
            buffer = num;
        }


        if (check > 0){
            num_of_elements2++;
            array2 = (int *) realloc(array2, ((num_of_elements2) * sizeof(int)));
            array2[num_of_elements2-1] = array[i];


            for (int j = 0; j < *num_of_elements; j++) {
                if (j != i && j < i) {
                    array[j] = array[j];
                }
                else {
                    array[j] = array[j+1];
                }
            }

            array = (int *) realloc(array, ((*num_of_elements) - 1) * sizeof(int));
            *num_of_elements = *num_of_elements - 1;
            i--;
        }
        buffer = -9999;
    }

    printf("\n");
    if (*num_of_elements == 0) {
        printf("Array is free");
    }
    else {
        printf("Your array: ");
        for (int i = 0; i < *num_of_elements; i++) {
            if (i != 0) {
                printf(", ");
            }
            printf("[%d]", array[i]);
        }
    }
    if (num_of_elements2 == 0) {
        printf("\nArray2 is free\n");
    }
    else {
        printf("\n");
        printf("Your array2: ");
        for (int i = 0; i < num_of_elements2; i++) {
            if (i != 0) {
                printf(", ");
            }
            printf("[%d]", array2[i]);
        }
    }
    free(array2);
    return array;
}