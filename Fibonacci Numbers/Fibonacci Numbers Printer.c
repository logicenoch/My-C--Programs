/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fibonacci Numbers Printer.c
 * Author: USER
 *
 * Created on October 11, 2019, 6:24 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define LIMIT 20

/*
 * 
 */
long f0 = 0, f1 = 1, temp;
long n;

long fibonacci(void);
int is_prime(long);
int is_fib_prime(void);
int cnt = 0, ncnt = 0;

long fibonacci(void) {

    for (n = 2; n <= LIMIT; ++n) {
        temp = f1;
        f1 += f0;
        f0 = temp;
        return f1;
    }
}

int is_prime(long f1) {
    register int i, cnt = 0;
    for (i = 1; i <= f1; i++)
        if (f1 % i == 0)
            cnt++;

    if (cnt++ == 2)
        return 'Y';
    else
        return 'N';
}

int is_fib_prime(void) {
    register int cnt = 0;
    for (n = 2; n <= LIMIT; n++) {
        if (is_prime(fibonacci()) == 'Y')
            cnt++;
    }
    return cnt;
}

int main(int argc, char** argv) {
    cnt = 0;
    printf("\tn\tFibonacci Number\tFibonacci Prime");
    printf("\n\t%d\t\t   %d\n\t%d\t\t   %d\n", 0, 0, 1, 1);
    register long n;
    for (n = 2; n <= LIMIT; n++) {
        long fibnum = fibonacci();
        printf("  %7ld%19ld\t            %c\n", n, fibnum, is_prime(fibnum));
    }
}

