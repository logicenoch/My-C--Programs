/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   range.c
 * Author: USER
 *
 * Created on August 30, 2019, 5:38 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int iDigi = 0;

    printf("\nEnter a digit from 1 - 10: ");
    scanf("%d", &iDigi);
    if (iDigi < 1 || iDigi > 10) {
        printf("\nResponse: Number not in range!\n");

    } else {
        printf("\nResponse: Number in range!\n");
    }

    return (EXIT_SUCCESS);
}

