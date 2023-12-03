#include <stdio.h>
#include <stdlib.h>
#include "Initializing_an_array.h"

int* Initializing_an_array(int *num_of_elements)
{
    int* array;
    int num_of_elements_array;
    printf("Enter array dimension: ");
    while (scanf("%d", &num_of_elements_array) != 1) {
        while ((getchar()) != '\n')
            printf("Error. Enter array dimension: ");
    }
    if(num_of_elements_array < 0)
    {
        printf("Since you entered a negative number, it will be replaced with a positive one:\n");
        num_of_elements_array = -num_of_elements_array;
    }

    *num_of_elements = num_of_elements_array;
    array = (int*)malloc((num_of_elements_array) * sizeof(int));
    for (int i = 0; i < num_of_elements_array; i++)
    {
        printf("[%d] the array element is: ", i);
        while (scanf("%d", &array[i]) != 1) {
            while ((getchar()) != '\n')
                printf("Error. Enter array element value: ");
        }
    }
    printf("Your array: ");
    for (int i = 0; i < num_of_elements_array; i++)
    {
        if (i != 0){
            printf(", ");
        }
        printf("[%d]", array[i]);
    }
    printf("\n");
    return array;
}