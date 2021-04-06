/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sum.h
 * Author: Logic
 *
 * Created on July 30, 2020, 6:15 PM
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000

typedef struct matrices
{
    int row, column;
    int *array[MAX_SIZE];
} matrix;

matrix *CreateMatrix(unsigned, unsigned);
void ViewMatrix(matrix *);
void AssignValues(matrix *);
matrix *AddMatrices(matrix *, matrix *, matrix *);

