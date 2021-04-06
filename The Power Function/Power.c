/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   power.c
 * Author: Simply Enoch
 *
 * Created on October 21, 2019, 8:37 AM
 */

#include <stdio.h>
#include <stdlib.h>

double power(double, int);

int main(int argc, char** argv) {
    float x;
    int n;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("%.3f raised to the power of %d is %.8f", x, n, power(x, n));
    return (EXIT_SUCCESS);
}

double power(double x, int n) {
    int i;
    double product = 1.0;
    for (i = 1; i <= n; i++)
        product *= x;
    return product;
}
