/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Logic
 *
 * Created on August 10, 2020, 12:22 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//This defines the nature of the node.
struct stacknode
{
    int data;
    struct stacknode *next;
};
typedef enum boolean
{
    false,
    true
} bool;
/*
 * 
 */
//Creates a new stacknode with data in it.
struct stacknode *newNode(int data)
{
    struct stacknode *node = malloc(sizeof(struct stacknode)); //Allocates memory for the new node.
    node->data = data;                                         //Assignes data to the new node.
    node->next = NULL;                                         //Causes the next to point at nothing.
    return node;                                               //Returns the node with data.
}
//checkes if the stack is empty
int isEmpty(struct stacknode *root)
{
    return !root; //Returns true if the root is empty and false if the root is not empty.
}
//Pushes an element to the stack.
void push(struct stacknode **root, int data)
{
    struct stacknode *node = newNode(data); //Creates a new node.
    node->next = *root;                     //The new node now becomes the head or the root.
    *root = node;                           //The root takes the position of a second node.
    printf("%d pushed to the stack\n", data);
}

//Removes the topmost element.
int pop(struct stacknode **root)
{
    if (!root) //Checks if the stack is empty.
        return INT_MIN;
    struct stacknode *temp = *root; //temp points to the head of the stack.
    *root = (*root)->next;          //Advances to the next node.
    int popped = temp->data;        //Extracts the data in the previous node(the one to be popped).
    free(temp);                     //Frees the storage allocated to the popped element.
    return popped;                  //returns the popped value.
}
//Prints the last value on the stack
int top(struct stacknode *root)
{
    if(!root)//checks if the stack is empty.
        return INT_MIN;//
    return root->data;
}
int main(int argc, char **argv)
{
    struct stacknode *stack;
    stack = NULL;
    push(&stack, 90);
    printf("%d\n", isEmpty(stack));
    printf("%d popped.\n", pop(&stack));
    printf("%d", isEmpty(stack));
    return (EXIT_SUCCESS);
}
