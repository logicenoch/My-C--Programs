/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   iDigit.c
 * Author: USER
 *
 * Created on August 30, 2019, 5:35 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * 
 */
int main(int argc, char** argv) {

    char cRes = '\0';

    printf("\nEnter A Letter: ");
    scanf("%c", &cRes);

    if (isdigit(cRes) == 0) {
        printf("\nWow you just keyed in a character\n");

    } else {
        printf("\nMeen What you keyed in just now is not a letter\n");
    }

    return (EXIT_SUCCESS);
}

