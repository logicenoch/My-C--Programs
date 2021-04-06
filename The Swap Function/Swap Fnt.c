/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Swap Fnt.c
 * Author: Simply Tesla
 *
 * Created on October 29, 2019, 11:24 PM
 */

#include <stdio.h>
#include <stdlib.h>
void change(int*, int*);

void swap(int *m, int *n) {
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
            
}
/*
 * 
 * palindrome
 */
int main(int argc, char** argv) {
    int m = 10, n = 15;
    printf("Before function Call: swap(%d,%d)\n\n", m, n);
    swap(&m, &n);
    printf("swap(%d,%d)", m, n);
    return (EXIT_SUCCESS);
}

