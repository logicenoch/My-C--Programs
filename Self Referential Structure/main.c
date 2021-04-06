/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Logic
 * About: This is a self referential strucure used to create ADTs such as linked lists, queues,trees etc.
 *
 * Created on August 5, 2020, 2:49 AM
 */

#include <stdio.h>
#include <stdlib.h>

typedef int DATA;
//creats the SRS.
typedef struct list
{
    DATA d;
    struct list *node;
} self_ref;

int main(int argc, char **argv)//The main!
{
    //creates three objects of type self_ref.
    self_ref a, b, c;

    //Initializes the data and pointer - linker.
    a.d = 4;
    b.d = 3;
    c.d = 6;
    a.node = b.node = c.node = NULL;

    //Links the three objects.
    a.node = &b;
    b.node = &c;

    printf("%d", a.node->node->d);

    return (EXIT_SUCCESS);
}
