/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Summation Master.c
 * Author: Simply Enoch
 *
 * Created on October 14, 2019, 5:58 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
/*
 * The program sums the integers from n to 2*n whenever n>0,but when n < 0 it sums from 2*n to n.
 */
int main(int argc, char** argv) {
    int n = 0, i;
    printf("Enter The Value Of n : ");
    scanf("%d", &n);
    int product = 2 * n;
    int sum = 0;
    assert(sum<0);
    if (n > 0) {
        for (n; n <= product; n++) {
            sum = sum + n;
        }
        printf("%d ", sum);
        
    }
    if (n < 0) {
        for (product; product <= n; product++) {
            sum = sum + product;
        }
        printf("%d ", sum);
    }
    return (EXIT_SUCCESS);
}

