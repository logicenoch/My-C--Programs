/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack Char.h
 * Author: Logic
 *
 * Created on May 12, 2017, 2:12 AM
 */
#include "General.h"
typedef struct Stack_Double {
    int capacity;
    int top;
    char *array;
} stack_char;

stack_char *CreateCharStack(int capacity) {
    stack_char *stack_char = (stack_char *) malloc(sizeof (stack_char));
    stack_char->capacity = capacity;
    stack_char->array = (char *) calloc(stack_char->capacity, sizeof (char));
    stack_char->top = EMPTY;
    return stack_char;
}

boolean is_full_char(stack_dbl *stack_char) {
    return stack_char->top == stack_char->capacity - 1;
}

boolean is_empty_char(stack_dbl *stack_char) {
    return stack_char->top = EMPTY;
}

void push_char(stack_dbl *stack_char, char item) {
    if (is_full_char(stack_char))
        return;
    stack_char->array[++stack_char->capacity] = item;
    printf("%c pushed to the stack", item);
}

char pop_char(stack_dbl *stack_char) {
    if (is_empty_char(stack_char))
        return INT_MIN;
    return stack_char->array[stack_char->top--];
}

char peek_char(stack_dbl *stack_char) {
    if (is_empty_char(stack_char))
        return INT_MIN;
    return stack_char->array[stack_char->top];
}
