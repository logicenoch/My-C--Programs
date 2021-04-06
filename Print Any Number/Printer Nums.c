/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Printer Nums.c
 * Author: USER
 *
 * Created on October 8, 2019, 10:24 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int i = 0, j = 0, n;
    printf("Enter Number Of Digits You Wanna See: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        if (i % 10 == 0)
            putchar('\n');
        j++;
        printf("%d\t", j);
    }

    return (EXIT_SUCCESS);
}

