#include <stdio.h>
#include <stdlib.h>
#include "Initializing_an_array.h"
#include "Inserting_a_new_element.h"
#include "Deleting_an_element.h"
#include "Array_output.h"
#include "Individual_task.h"

int main() {
    int *array;
    int num = 0;
    int *num_of_elements = &num;
    int check = 0;

    char option = -1;
    do {
        printf("\n");
        printf("*------------*MENU*------------*\n");
        printf("* [0] Exit                     *\n");
        printf("* [1] Initializing an array    *\n");
        printf("* [2] Inserting a new element  *\n");
        printf("* [3] Deleting an element      *\n");
        printf("* [4] Array output             *\n");
        printf("* [5] Individual task          *\n");
        printf("* [6] Help                     *\n");
        printf("*------------------------------*\n");

        printf("Enter index of option: ");

        if (scanf(" %c", &option) == EOF) {
            return 0;
        }

        switch (option) {
            case '0':
                printf("Exiting...\n");
                break;
            case '1':
                array = Initializing_an_array(num_of_elements);
                check = 1;
                break;
            case '2':
                array = Inserting_a_new_element(array, num_of_elements);
                break;
            case '3':
                array = Deleting_an_element(array, num_of_elements);
                break;
            case '4':
                array = Array_output(array, num_of_elements);
                break;
            case '5':
                array = Individual_task(array, num_of_elements);
                break;
            case '6':
                printf("\n\n");
                printf("*------------*HELP*------------*\n");
                printf("\n");
                printf("[0] Exit \n");
                printf("-----\n");
                printf("Option number zero(0). Performs the program shutdown function.\n");
                printf("-----\n");
                printf("[1] Initializing an array \n");
                printf("-----\n");
                printf("Option number one(1).\n Implements a function to initialize an array.\n For the program to work correctly, it is recommended to call it first.\n Restrictions on entering values are real numbers, as well as integers beyond the limits of the int type(-2 147 483 648 to 2 147 483 647).\n");
                printf("-----\n");
                printf("[2] Inserting a new element \n");
                printf("-----\n");
                printf("Option number two(2).\n A function to create a new array element at a user-selected index.\n Both values are limited to type int(-2 147 483 648 to 2 147 483 647).\n");
                printf("-----\n");
                printf("[3] Deleting an element  \n");
                printf("-----\n");
                printf("Option number three(3).\n A function for deleting an existing array element at a user-selected index.\n Both values are limited to type int(-2 147 483 648 to 2 147 483 647).\n");
                printf("-----\n");
                printf("[4] Array output  \n");
                printf("-----\n");
                printf("Option number four(4).\n The function outputs an array.\n If the array is not specified, the program will display the corresponding message.\n");
                printf("-----\n");
                printf("[5] Individual task   \n");
                printf("-----\n");
                printf("Option number five(5).\n The function performs the following individual task: in the original sequence of integers,\n find those whose digits are arranged strictly in descending order when reading from left to right.\n Form a new sequence from these numbers, removing them from the original one.\n If one of the arrays is missing there will be a corresponding message.\n");
                printf("-----\n");
                printf("[6] Help   \n");
                printf("-----\n");
                printf("Option number six(6).\n Function for displaying an auxiliary manual.\n");
                printf("*------------------------------*\n");
                break;

            default:
                printf("Wrong input!\n");
                break;
        }
        printf("\n\n\n\n\n");
    } while (option != '0');
    if (check == 1) {
        free(array);
        return 0;
    }
}


