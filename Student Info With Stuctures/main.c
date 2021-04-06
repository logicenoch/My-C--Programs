/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Logic
 *
 * Created on May 12, 2017, 1:34 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>
#include <math.h>
#include <limits.h>

struct address
{
    char *street;
    char *town;
    char *state;
};

struct student_info
{
    char *first_name;
    char *last_name;
    int age;
    struct address *a_ptr;
};

typedef struct student_info student_info;

int main(void)
{
    student_info s1;

    s1.first_name = "Chibuzo";
    s1.last_name = "Okeke";
    s1.age = 21;
    s1.a_ptr->street = "Godwin Onyilofor Compound";
    s1.a_ptr->town = "Nibo";
    s1.a_ptr->state = "Anambra State";

    printf("Last Name: %s\nFirst Name: %s\nAge: %d\nAddress: %s %s %s ", s1.last_name, s1.first_name, s1.age, s1.a_ptr->street, s1.a_ptr->town, s1.a_ptr->state);
    printf("%d", sizeof(struct student_info));
}


