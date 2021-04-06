/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RandProbability.c
 * Author: USER
 *
 * Created on October 27, 2019, 1:58 AM
 */


#include <stdio.h>
#include <stdlib.h>
#define INITIAL_SEED 17
#define MULTIPLIER 25173
#define INCREMENT 13849
#define MODULUS 65535
#define FLOATING_MODULUS 65535.0

static unsigned seed = INITIAL_SEED;

unsigned random(void) {
    seed = (MULTIPLIER * seed + INCREMENT) % MODULUS;
    return seed;
}

double probability(void) {
    seed = (MULTIPLIER * seed + INCREMENT) % MODULUS;
    return (seed / FLOATING_MODULUS);
}

long power(int m, int n) {
    int i;
    long product = 1;
    for (i = 1; i <= n; ++i)
        product *= m;
    return product;

}

int main(void) {
    seed = time(NULL);
    srand(seed);
    int i;
    int cnt;
    double sum = 0.0;
    for (i = 0, cnt = 1; i < 100; ++cnt, i++) {
        double firstrand = probability();
        sum += firstrand;
    }
    printf("The average %f is %f", sum, sum / 100);
}

