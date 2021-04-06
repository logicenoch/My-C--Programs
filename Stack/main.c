/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Logic
 *
 * Created on May 12, 2017, 5:21 AM
 */

#include "Stack Integer.h"

int main(int argc, char **argv) {
    Stack_Int *stack;
    stack = CreateIntegerStack(CAPACITY);
    Push(stack, 10);
    Push(stack, 100);
    Push(stack, 45);
    printf("Stack Content:\n");
    for (int i = 0; i < CAPACITY; i++) {
        printf("%d\n", stack->array[i]);
    }
    printf("Stack Info:");
    printf("\nStack Full %d", is_Full(stack));
    printf("\nPeek Value %d\n", peek(stack));
    if (!is_Full(stack)) {
        printf("Stack is not yet full.\n");
    } else {
        printf("Stack is full.\n");
    }

    return (EXIT_SUCCESS);
}
