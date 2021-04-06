/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vector Cals.c
 * Author: USER
 *
 * Created on November 27, 2019, 12:01 PM
 */

#include <stdio.h>
#include <stdlib.h>

#define N 3

typedef double scalar;
typedef scalar vector[N];
typedef scalar matrix[N];

void add(vector, vector, vector);
scalar dot_product(vector, vector);
void multiply(matrix, matrix, matrix);

void add(vector x, vector y, vector z) { /*x = y + z*/
    int i;
    for (i = 0; i < N; ++i)
        x[i] = y[i] + z[i];
}

scalar dot_product(vector x, vector y) {
    int i;
    scalar sum = 0.0;
    for (i = 0; i < N; ++i)
        sum += x[i] * y[i];
    return sum;
}

void multiply(matrix a, matrix b, matrix c) {
    int i, j, k;

    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            a[i][j] = 0.0;
            for (k = 0; k < N; ++k)
                a[i][j] += b[i][k] * c[k][j];
        }
    }
}

int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

