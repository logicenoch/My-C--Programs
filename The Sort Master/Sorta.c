/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sorta.c
 * Author: USER
 *
 * Created on September 27, 2019, 2:39 AM
 */

#include "prototypes.h"

/*
 * 
 */
int main(int argc, char** argv) {
    int i = 0, *a, j = 0, n, iActive;
    for (;;) {
        i = 0;
        printf("Welcome to the bubble sort program.\n"
                "This program is highly efficient \n"
                "for sorting small chunk of data\n"
                "and it is easy to use.\n\n"
                "STEPS"
                "\n\nStep 1: Input the number of data you want to sort.\n"
                "Step 2: Input the data (integers only).\n"
                "Step 3: Choose the preferred sorting algorithm.\n"
                "Boom! the program sorts the input for you automatically.\n\n ");
        printf("Number Of Digits To Sort: ");
        scanf("%d", &n);

        a = calloc(n, sizeof (int));

        for (i = 0; i < n; i++) {
            printf("Enter Number %d: ", ++j), scanf("%d", &a[i]);
        }
        printf("Sort Type:\n");
        printf("\n1. Ascending Order.\n2. Descending Order.");
        printf("\nResponse: "), scanf("%d", &iActive);
        switch (iActive) {
            case 1:
                printf("\nSorting...\nSorting...\nSorting...\n\n");
                for (i = 0; i < n; i++) {
                    AscendbubbleSort(a, n);
                    printf("Order[%d] = %d\n", i, a[i]);
                }
                free(a);
                break;

            case 2:
                printf("\nSorting...\nSorting...\nSorting...\n\n");
                for (i = 0; i < n; i++) {
                    DescendbubbleSort(a, n);
                    printf("Order[%d] = %d\n", i, a[i]);
                }
                free(a);
                break;
        }
        putchar('\n');
    }
}

