/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Logic
 *
 * Created on May 12, 2017, 2:56 AM
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    double real_part;
    double imaginary_part;
} complex;

void complex_addition(complex *, complex *, complex *);
void complex_multi(complex *, complex *, complex *);

int main(int argc, char **argv)
{
    complex *a, *b, *c;
    a->real_part =0;
    a->imaginary_part =0;
    b->real_part = 10.0;
    b->imaginary_part = 5.0;

    c->real_part = 2.0;
    c->imaginary_part = 3.0;

    complex_multi(a, b, c);

    printf("real value: %.2f\ncomplex value: %.2f", a->real_part, a->imaginary_part);

    return (EXIT_SUCCESS);
}

void complex_addition(complex *a, complex *b, complex *c)
{
    a->real_part = b->real_part + c->real_part;
    a->imaginary_part = b->imaginary_part + c->imaginary_part;
}

void complex_multi(complex *a, complex *b, complex *c)
{
    a->real_part = (b->real_part * c->real_part) - (b->imaginary_part * c->imaginary_part);
    a->imaginary_part = (b->imaginary_part * c->real_part) + (b->real_part * c->imaginary_part);
}