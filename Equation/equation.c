/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   equation.c
 * Author: USER
 *
 * Created on August 30, 2019, 5:43 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int a = 0;
    int b = 0;
    int x = 0;
    int y = 0;
    int f;
    printf("\nf = (a-b)*(x-y)\n");



    printf("\nEnter The Value(a): ");
    scanf("%d", &a);

    printf("\nEnter The Value(b): ");
    scanf("%d", &b);

    printf("\nEnter The Value(x): ");
    scanf("%d", &x);

    printf("\nEnter The Value(y): ");
    scanf("%d", &y);

    f = (a - b)*(x - y);
    printf("\nNow f = ");
    printf("%d", f);

    return (EXIT_SUCCESS);
}

