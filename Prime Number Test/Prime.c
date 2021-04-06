/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Prime.c
 * Author: USER
 *
 * Created on October 22, 2019, 8:34 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int is_prime(int);
void response(int is_prime(int));

int is_prime(int n) {
    register int i, cnt = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            cnt++;
    }
    if (cnt++ == 2)
        return 1;
    else
        return 0;
}

void response(int is_prime(int n)) {
    if (is_prime == 1)
        printf("Number Is Prime!");
    else
        printf("Number Is Not A Prime Number");
}

int main(int argc, char** argv) {
    int n;
    printf("::::TEST FOR PRIME NUMBER::::");
    printf("\n\nEnter Your Number: ");
    scanf("%d", &n);
    response(is_prime(n));
    return EXIT_SUCCESS;
}

