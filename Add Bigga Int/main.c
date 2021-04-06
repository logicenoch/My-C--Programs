/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: USER
 *
 * Created on January 3, 2020, 3:33 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 20

typedef const char cchr;

void add(int sum[], int a[], int b[]);
void wrt(cchr *s, int a[]);

/*
 * 
 */
int main(int argc, char** argv) {
        int a[N] = {7, 5, 9, 8, 9, 7, 5, 0, 0, 9, 9, 0, 8, 8};
    int b[N] = {7, 7, 5, 3, 1, 2, 8, 8, 9, 6, 7, 7};
    int sum[N];
    int ndigits;

    add(sum, a, b);
    wrt("Integer a: ", a);
    wrt("integer b: ", b);
    wrt("      Sum: ", sum);
    return (EXIT_SUCCESS);
}

void add(int sum[], int a[], int b[]) {
    int carry = 0;
    int i;
    for (i = 0; i < N; ++i) {
        sum[i] = a[i] + b[i] + carry;
        if (sum[i] < 10)
            carry = 0;
        else {
            carry = sum[i] / 10;
            sum[i] %= 10;
        }
    }
}

void wrt(cchr *s, int a[]) {
    int i;
    printf("%s", s);
    //Print Leading zeros as blank;
    for (i = N - 1; i > 0 && a[i] == 0; --i)
        putchar(' ');
    //After a leading digit greater than zero is found.
    //Print all the remaining digits, including zeros.
    for (; i >= 0; --i)
        printf("%d", a[i]);
    putchar('\n');
}
