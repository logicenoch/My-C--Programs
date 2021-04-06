/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Logic
 *
 * Created on May 12, 2017, 1:17 AM
 */

#include <stdio.h>
#include <stdlib.h>
typedef union
{
    int i;
    float f;
    /* data */
}numbers;

/*
 * 
 */
int main(int argc, char** argv) {
    numbers n;
    n.i = 444;
    printf("i: %10d      %16.10e\n", n.i, n.f);
    n.f = 444.0;
    printf("i: %10d      %16.10e\n", n.i, n.f);
}

