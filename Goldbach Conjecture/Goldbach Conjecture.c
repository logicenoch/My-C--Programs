/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Goldbach Conjecture.c
 * Author: Simply Tesla
 *
 * Created on October 25, 2019, 7:39 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define START 700
#define STOP 1100

int is_prime(int);

int is_prime(int n) {
    int i, cnt = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            cnt++;
    }
    if (cnt++ == 2)
        return 1;
    else
        return 0;
}

int main(int argc, char** argv) {
    printf("\t\t::::GOLDBACH-CONJECTURE::::");

    register int i, j, k;
    for (i = START; i <= STOP; i += 2) {
        for (j = 2; j <= i; j++) {
            if (is_prime(j) == 1) {
                k = i - j;
                if (is_prime(k) == 1) {
                    if (k + j == i)
                        printf("\n%d = %d + %d\n", i, k, j);
                    break;
                } else
                    continue;
            } else
                continue;
        }
    }
    return (EXIT_SUCCESS);
}

