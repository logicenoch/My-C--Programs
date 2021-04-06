/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PolyArithm.c
 * Author: USER
 *
 * Created on December 20, 2019, 6:34 PM
 */

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void add(double f[], double g[], double h[], int);
void difference(double f[], double g[], double h[], int);

void add(double f[], double g[], double h[], int n) {

    int i, variable = 'a';
    double sum;
    for (i = 0; i <= n; i++) {
        f[i] = g[i] + h[i];
    }
    printf("The Sum Of The Two Polynomials g(x)and h(x) is ");
    for (i = 0; i <= n; i++) {
        printf("%c[%d] ", variable++, (int) f[i]);
    }
}

void difference(double f[], double g[], double h[], int n) {
    int i, variable = 'a';
    double sum;
    for (i = 0; i <= n; i++) {
        f[i] = g[i] - h[i];
    }
    printf("\nThe diff b/w The Two Polynomials g(x)and h(x) is ");
    for (i = 0; i <= n; i++) {
        printf("%c[%d] ", variable++, (int) f[i]);
    }
}

int main(void) {
    printf("::::POLYNOMIAL ARITHMETIC::::\n");
    int n = 2;
    double h[] = {2.0, 1.0, 3.0},
    g[] = {2.0, 2.0, 5.0},
    f[n];
    add(f, g, h, n);
    difference(f, g, h, n);

}

