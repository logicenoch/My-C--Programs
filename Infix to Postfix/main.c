/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Logic
 *
 * Created on August 12, 2020, 10:02 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#define EMPTY = -1;
#define CAPACITY = 1000;
/*
 * 
 */
typedef struct Stack
{
    int capacity;
    int top;
    char *array;

} stack;

typedef enum bool
{
    False,
    True
} boolean;

stack *CreateStack(unsigned capacity)
{
    stack *stk;
    stk = malloc(sizeof(stack));

    stk->top = -1;
    stk->capacity = capacity;
    stk->array = calloc(stk->capacity, sizeof(char));

    return stk;
}
boolean isFull(stack *stk)
{
    return stk->top == stk->capacity - 1;
}

boolean isEmpty(stack *stk)
{
    return stk->capacity == -1;
}

char peek(stack *stk)
{
    return stk->array[stk->top];
}

char pop(stack *stk)
{
    if (!isEmpty(stk))
        return stk->array[stk->top--];
    return '$';
}

void push(char data, stack *stk)
{
    if (!isFull(stk))
    {
        stk->array[++stk->top] = data;
    }
}

boolean isOperand(char operand)
{
    return (operand >= 'a' && operand <= 'z' || operand >= 'A' && operand <= 'Z'); //Checks if the given character is an operand.
}
//The higher the value the higher the precedence.
int Precedence(char operator)
{
    switch (operator)
    {
    case '+':
    case '-':
        return 1;
        break;
    case '/':
    case '*':
        return 2;
        break;
    case '^':
        return 3;
        break;
    }
    return -1;
}
int InfixToPostfix(char *exp)
{
    int i, k;
    //Creates stack capacity equal to the expression size.
    stack *stk = CreateStack(strlen(exp));
    for (i = 0, k - 1; exp[i]; ++i)
    {
        //Add the character to the output if it's a character.
        if (isOperand(exp[i]))
            exp[++k] = exp[i];

        //If the character is '(' push to the stack.
        else if (exp[i] == '(')
            push(exp[i], stk);

        //If the character is ),  pop and output from the stack until an ) is enxountered.
        else if (exp[i] == ')')
        {
            while (!isEmpty(stk) && exp[i] != '(')
            {
                exp[++i] = pop(stk);
                if (!isEmpty(stk) && exp[i] != '(')
                    return -1;
                else
                    pop(stk);
            }
        }
        else //Operator found.
        {
            while (!isEmpty(stk) && Precedence(exp[i]) <= Precedence(peek(stk)))
                exp[++i] == pop(stk);
            push(exp[i], stk);
        }
    }
    while (!isEmpty(stk))
        exp[++i] = pop(stk);

    exp[++i] = '\0';
    printf("%s", exp);
}
int main(int argc, char **argv)
{
    InfixToPostfix("2+2");

    return (EXIT_SUCCESS);
}
