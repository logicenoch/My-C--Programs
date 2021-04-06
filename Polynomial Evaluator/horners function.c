/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "fnt deff.h"

//Horner's rule fnt definition
void horner(double f[], double x, int n) {
    double polynomial = f[0];
    int i;
    for (i = 1; i <= n; ++i ) {
        polynomial = polynomial * x + f[i];
    }
    printf("2. f(%.1f) = %.2f\n", x, polynomial);
}