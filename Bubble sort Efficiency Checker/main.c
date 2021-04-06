/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: USER
 *
 * Created on December 20, 2019, 7:17 PM
 */

#include "Bubble_Eff.h"

/*
 * 
 */
int main(int argc, char** argv) {
    int seed = time(NULL);
    srand(seed);
    int i = 0, *a, j = 0, iActive;
    for (;;) {
        i = 0;
        printf("Welcome to the bubble sort Efficiency Checker Program.\n"
                "This program is used to test the efficency of the bubble\n"
                "sort engine\n\n");

        a = calloc(MAX, sizeof (int));

        for (i = 0; i < MAX; i++) {
            a[i] = rand() % 100;
        }
        printf("Sort Type:\n");
        printf("1. Ascending Order.\n2. Descending Order.");
        printf("\nResponse: "), scanf("%d", &iActive);
        switch (iActive) {
            case 1:
                printf("\nSorting...\nSorting...\nSorting...\n\n");
                for (i = 0; i < MAX; i++) {
                    AscendbubbleSort(a, MAX);
                    printf("Order[%d] = %d\n", i, a[i]);
                }
                free(a);
                break;

            case 2:
                printf("\nSorting...\nSorting...\nSorting...\n\n");
                for (i = 0; i < MAX; i++) {
                    DescendbubbleSort(a, MAX);
                    printf("Order[%d] = %d\n", i, a[i]);
                }
                free(a);
                break;
        }
        putchar('\n');
    }
}
