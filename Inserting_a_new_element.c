#include <stdio.h>
#include <stdlib.h>
#include "Inserting_a_new_element.h"

int* Inserting_a_new_element(int* array, int* num_of_elements) {
    if(*num_of_elements == 0)
    {
        printf("Your array is free");
        return array;
    }
    int new_element;
    int index;
    //printf("%d", *num_of_elements);
    printf("Enter the value of the new element: ");
    while (scanf("%d", &new_element) != 1) {
        while ((getchar()) != '\n')
            printf("Error. Enter the value of the new element: ");
    }
    printf("Enter the index of the array cell where the new element should be located: ");
    while (scanf("%d", &index) != 1) {
        while ((getchar()) != '\n')
            printf("Error. Enter the index of the array cell where the new element should be located: ");
    }
    if(index < 0)
    {
        printf("Since you entered a negative number, it will be replaced with a positive one:\n");
        index = -index;
    }
    if (index > (*num_of_elements - 1)){
        printf("You entered an index that is too large, so the value will be moved to the end of the array:\n");
        index = *num_of_elements;
    }


    array = (int *) realloc(array, ((*num_of_elements) + 1) * sizeof(int));

    for (int i = *num_of_elements; i >= index; i--) {
        if (i != index) {
            array[i] = array[i-1];
        }
        else {
            array[i] = new_element;
            break;
        }
    }
    *num_of_elements = *num_of_elements + 1;

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