/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   The Table.c
 * Author: USER
 *
 * Created on October 22, 2019, 7:59 AM
 */

#include <stdio.h>
#include <stdlib.h>
#define N 7
long power(int, int);
void prn_heading(void);
void prn_tbl_of_power(int);

int main(int argc, char** argv) {
    prn_heading();
    prn_tbl_of_power(N);
    return (EXIT_SUCCESS);
}

void prn_heading(void) {
    printf("\n\t\t:::::TABLE OF POWERS:::::\n\n");
}

void prn_tbl_of_power(int n) {
    int i, j;
    for (i = 1; i <= n; ++i){
        for (j = 1; j <= n; ++j) {
            if (j == 1)
                printf("%ld", power(i, j));
            else
                printf("%9ld", power(i, j));     
        }
        putchar('\n');
    }
}

long power(int m, int n) {
    int i;
    long product = 1;
    for (i = 1; i <= n; ++i)
        product *= m;
    return product;
}