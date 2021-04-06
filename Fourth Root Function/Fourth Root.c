/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fourth Root.c
 * Author: USER
 *
 * Created on October 21, 2019, 10:02 AM
 */

#include <stdio.h>
#include <stdlib.h>

double fouth_root(int);

int main(void) {
    int k;
    printf("Enter The Number: ");
    scanf("%d", &k);
    printf("Fourth Root Of %d is %f", k, fouth_root(k));

}

double fouth_root(int k) {
    double result;
    result = sqrt(k);
    return sqrt(result);
}


