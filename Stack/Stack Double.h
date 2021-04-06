/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack Double.h
 * Author: Logic
 *
 * Created on May 12, 2017, 2:11 AM
 */
#include "General.h"

typedef struct Stack_Double
{
    int capacity;
    int top;
    double *array;
} stack_dbl;

stack_dbl *CreateStackDouble(int capacity)
{
    stack_dbl *stack_double = (stack_dbl *)malloc(sizeof(stack_dbl));
    stack_double->capacity = capacity;
    stack_double->array = (double *)malloc(stack_double->capacity * sizeof(double));
    stack_double->top = EMPTY;
    return stack_double;
}

boolean is_full_dbl(stack_dbl *stack_double)
{
    return stack_double->top == stack_double->capacity - 1;
}

boolean is_empty_dbl(stack_dbl *stack_double)
{
    return stack_double->top = EMPTY;
}

void push_dbl(stack_dbl *stack_double, double item)
{
    if (is_full_dbl(stack_double))
        return;
    stack_double->array[++stack_double->capacity] = item;
    printf("%f pushed to the stack", item);
}

double pop_dbl(stack_dbl *stack_double)
{
    if (is_empty_dbl(stack_double))
        return __DBL_MIN__;
    return stack_double->array[stack_double->top--];
}

double peek_dbl(stack_dbl *stack_double)
{
    if (is_empty_dbl(stack_double))
        return __DBL_MIN__;
    return stack_double->array[stack_double->top];
}