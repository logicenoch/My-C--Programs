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
#include <time.h>

//The queue node is similar to that of the linked list node.
struct QNode
{
    int key;
    struct QNode *next;
};

//A queue has a pointer pointing to the front and rear of the linked list.
struct Queue
{
    struct QNode *front, *rear;
};

struct QNode *NewNode(int k)
{
    struct QNode *temp = malloc(sizeof(struct QNode));
    temp->key = k;
    temp->next = NULL;
    return temp;
}

struct Queue *CreateQueue()
{
    struct Queue *q = malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}
//We use enqueue to add a new node to the queue.
void Enqueue(struct Queue *q, int k)
{
    struct QNode *node = NewNode(k);
    if (q->front == NULL)
    {
        q->rear = q->front = node;
        printf("%d enqueued to the queue!\n", k);
        return;
    }
    q->rear->next = node;
    q->rear = node;
    printf("%d enqueued to the queue!\n", k);
}

struct QNode *Dequeue(struct Queue *q)
{
    if (q->front == NULL)
        return NULL;
    struct QNode *data = q->front;
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    return data;
}

void printQueue(struct Queue *q)
{
    printf("FRONT --> ");
    for (; q->front->next != NULL; q->front = q->front->next)
        printf("%d --> ", q->front->key);

    if (q->front->next == NULL)
        printf("<-- REAR\n");
}

int main(int argc, char **argv)
{
    srand(time(NULL));
    struct Queue *q = CreateQueue();
    Enqueue(q, 200);
    Enqueue(q, 3);
    for (size_t i = 1; i < 20; i++)
    {
        Enqueue(q, rand() % 200);
    }

    printQueue(q);
    return (EXIT_SUCCESS);
}