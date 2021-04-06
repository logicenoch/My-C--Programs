/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fibonacci Number.c
 * Author: USER
 *
 * Created on October 13, 2019, 8:59 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define LIMIT 40
/*
 * 
 */
int main(int argc, char** argv) {
    long f0 = 0, f1 = 1, n, temp;
    printf("      n\t         Fibonacci Number\t   Fibonacci Quotient");
    printf("\n%7d\t%19d\n%7d\t%19d\n", 0, 0, 1, 1);
    for (n = 2; n <= LIMIT; ++n) {
        temp = f1;
        f1 += f0;
        f0 = temp;
        printf("%7ld\t%19ld\t%29.16f\n", n, f1, (double) f1 / f0);
    }
    return EXIT_SUCCESS;
    return (EXIT_SUCCESS);
}

