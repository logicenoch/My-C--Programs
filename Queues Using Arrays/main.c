/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Logic
 *
 * Created on August 12, 2020, 10:04 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*
 * 
 */
struct QUEUE
{
    int front, rear, size;
    unsigned capacity;
    int *array;
};

struct QUEUE *CreateQueue(int capacity)
{
    struct QUEUE *queue = malloc(sizeof(struct QUEUE)); //Case 1a.
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->capacity = capacity;
    queue->array = (int *)malloc(queue->capacity * sizeof(int)); //Case 1b.
    return queue;
}

int isFull(struct QUEUE *queue) { return (queue->size == queue->capacity); }
int isEmpty(struct QUEUE *queue) { return (queue->size == 0); }

int main(int argc, char **argv)
{

    return (EXIT_SUCCESS);
}