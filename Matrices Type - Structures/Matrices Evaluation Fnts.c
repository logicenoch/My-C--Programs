/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Matrix.h"
matrix *CreateMatrix(unsigned row, unsigned column)
{
    matrix *A = (matrix *)malloc(sizeof(matrix));
    A->row = row, A->column = column;
    for (int i = 0; i < A->row; i++)
        A->array[i] = (int *)malloc(A->column * sizeof(int));

    return A;
}

void ViewMatrix(matrix *A)
{
    for (size_t i = 0; i < A->row; i++)
    {
        for (size_t j = 0; j < A->column; j++)
        {
            printf("%d\t", A->array[i][j]);
        }
        putchar('\n');
    }
}

void AssignValues(matrix *A)
{
    int seed = time(NULL);
    srand(seed);
    for (int i = 0; i < A->row; i++)
        for (int j = 0; j < A->column; j++)
            A->array[i][j] = (rand() % 100) + 1;
    seed = 0;
}

matrix *AddMatrices(matrix *A, matrix *B, matrix *C)
{
    matrix *sum;
    sum = CreateMatrix(A->row, A->column);
    int sumA, sumB, sumC;
    printf("Sum Of A,B and C:\n");
    for (int i = 0; i < A->row; i++)
    {
        for (int j = 0; j < A->column; j++)
        {
            sumA = A->array[i][j];
            sumB = B->array[i][j];
            sumC = C->array[i][j];
            sum->array[i][j] = sumA + sumB + sumC;
        }
    }
    return sum;
}