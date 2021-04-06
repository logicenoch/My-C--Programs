/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Logic
 * About: This is an implementation of linked list using self referencing structures.
 *
 * Created on August 5, 2020, 2:50 AM
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void print_list(struct node *head) {
    while (head != NULL) {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NULL");
}

void push(struct node **head_ref, int data) {
    struct node *new_node = malloc(sizeof (struct node));
    new_node->data = data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insertAfter(struct node *prev_node, int data) {
    if (prev_node->next == NULL) {
        printf("Warning: Use the append function to add a node to the end of the list\n");
        return;
    }
    struct node *new_node = malloc(sizeof (struct node));
    new_node->data = data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(struct node **head_ref, int data) {
    struct node *new_node = malloc(sizeof (struct node));
    struct node *last = (*head_ref);
    new_node->data = data;
    new_node->next = NULL;
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

void deleteNode(struct node **head_ref, int key) {
    struct node *temp = *head_ref, *prev;

    if (*head_ref != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("key not found!\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
    return;
}

int specified_count(struct node *head, int data) {
    int found = 0;
    if (head == NULL)
        return 0;
    for (; head != NULL; head = head->next)
        if (head->data == data)
            found++;

    return found;
}

void remove_duplicates(struct node *head) {
    int match_data, duplicates_found = 0;
    if (head == NULL)
        return;

    while (head->next != NULL) {
        match_data = head->data;
        duplicates_found = specified_count(head, match_data);
        if (duplicates_found > 1)
                deleteNode(&head, match_data);
        head = head->next;
    }
}

int main() {
    struct node *head, *second, *third;
    head = second = third = NULL;

    head = malloc(sizeof (struct node));
    second = malloc(sizeof (struct node));
    third = malloc(sizeof (struct node));

    head->data = 2;
    head->next = second;
    second->data = 4;
    second->next = third;
    third->data = 6;
    third->next = NULL;
    push(&head, 1);
    insertAfter(third, 19);
    append(&head, 20);
    deleteNode(&head, 5);
    append(&head, 20);
    append(&head, 20);
    print_list(head);
    printf("\nDouble: %d", specified_count(head, 20));
    putchar('\n');
    deleteNode(&head,20);
    print_list(head);
}
