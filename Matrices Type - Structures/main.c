/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Logic
 *
 * Created on July 30, 2020, 6:13 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "Matrix.h"

/*
 * 
 */
int main(int argc, char **argv)
{
    matrix *A, *B, *C, *sum;
    unsigned i = 4, j = 4;
    A = CreateMatrix(i, j);
    B = CreateMatrix(i, j);
    C = CreateMatrix(i, j);
    AssignValues(A);
    AssignValues(B);
    AssignValues(C);
    printf("Matrix A:\n");
    ViewMatrix(A);
    putchar('\n');
    printf("Matrix B:\n");
    ViewMatrix(B);
    putchar('\n');
    printf("Matrix C:\n");
    ViewMatrix(C);
    putchar('\n');
    sum = AddMatrices(A, B, C);
    ViewMatrix(sum);
    return 0;
}
