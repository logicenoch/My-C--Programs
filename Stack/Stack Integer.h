/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack Integer.h
 * Author: Logic
 *
 * Created on May 12, 2017, 2:11 AM
 */
#include "General.h"

//A structure that represent a stack_int.

typedef struct stack_integer
{
    int top;
    unsigned capacity;
    int *array;

} Stack_Int;

//A function that creates a stack_int of given capacity
//It initializes size of stack_int as zero

Stack_Int *CreateIntegerStack(unsigned capacity)
{
    Stack_Int *stack_int = (Stack_Int *) malloc(sizeof(stack_int)); //Allocates memory for the stack_int
    stack_int->capacity = capacity;                        //Assigns capacity to the stack_int
    stack_int->top = EMPTY;
    stack_int->array = (int *)calloc(stack_int->capacity , sizeof(int)); //Allocates memory for the array
    return stack_int;                                                    //returns the stack_int created
}

//Stack is full when top is equal to the last index.

boolean is_Full(Stack_Int *stack_int)
{
    return (boolean)stack_int->top == stack_int->capacity - 1;
}

//Stack is empty when empty when top is equal to -1.

boolean is_Empty(Stack_Int *stack_int)
{
    return (boolean)stack_int->top == EMPTY;
}

//Increase top by 1 to add an item to stack_int.

void Push(Stack_Int *stack_int, int item)
{
    if (is_Full(stack_int))
        return;
    stack_int->array[++(stack_int->top)] = item;
    printf("%d pushed to the stack.\n", item);
}

//Decrease top by 1 to remove an item to stack_int.

int pop(Stack_Int *stack_int)
{
    if (is_Empty(stack_int))
        return INT_MIN;
    return stack_int->array[stack_int->top--];
}

int peek(Stack_Int *stack_int)
{
    if (is_Empty(stack_int))
        return INT_MIN;
    return stack_int->array[stack_int->top];
}
