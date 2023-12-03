#include <stdio.h>
#include <stdlib.h>
#include "Deleting_an_element.h"

int* Deleting_an_element(int *array, int *num_of_elements)
{
    if(*num_of_elements == 0)
    {
        printf("Your array is free");
        return array;
    }
    int index;
    //printf("%d", *num_of_elements);
    printf("Enter the index of the element you want to delete: ");
    while (scanf("%d", &index) != 1) {
        while ((getchar()) != '\n')
            printf("Error. Enter the index of the element you want to delete: ");
    }
    if(index < 0)
    {
        printf("Since you entered a negative number, it will be replaced with a positive one:\n");
        index = -index;
    }
    if (index < 0 || index > (*num_of_elements - 1)){
        printf("You entered a non-existent index:\n");
    }
    for (int i = 0; i < *num_of_elements; i++) {
        if (i != index && i < index) {
            array[i] = array[i];
        }
        else {
            array[i] = array[i+1];
        }
    }

    array = (int *) realloc(array, ((*num_of_elements) - 1) * sizeof(int));
    *num_of_elements = *num_of_elements - 1;

    printf("Your array: ");
    for (int i = 0; i < *num_of_elements; i++)
    {
        if (i != 0){
            printf(", ");
        }
        printf("[%d]", array[i]);
    }

    printf("\n");
    return array;
}