/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "fnt deff.h"

//power fnt.
double power(double n, int exp) {
    int i;
    double product = 1.0;
    for (i = 0; i < exp; i++) {
        product *= n;
    }
    return product;
}
//Normal evaluation fnt definition.
void eval(double f[], double x, int n) {
    double sum = 0.0;
    int i, j;
    for (i = n, j = 0; j <= n, i >= 0; j++, i--)
        sum += f[j] * power(x, i);

    printf("1. f(%.1f) = %.2f\n", x, sum);
}