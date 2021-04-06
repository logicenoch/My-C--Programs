/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Factoring.c
 * Author: Simply Tesla
 *
 * Created on October 27, 2019, 12:55 AM
 */

#include <stdio.h>
#include <stdlib.h>
int factoring(int);
int inum;

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
    int i, factors;
    printf("Enter The Numbers: ");
    scanf("%d", &inum);
    factors = factoring(inum);
    printf("%d\n", factors);
    return (EXIT_SUCCESS);
}

int factoring(int inum) {
    int i;
    for (i = 1; i <= inum; i++) {
        if (is_prime(i) == 1 && inum % i == 0) {
            inum /= i;
            return i;
        }
        if (i > inum)
            i = 1;
        else
            continue;
    }
}