/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Xter Calculator.c
 * Author: USER
 *
 * Created on October 4, 2019, 10:21 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int nameLength(char []);

int main(int argc, char** argv) {
    int name[20] = {'\0'};

    printf("Enter Your First Name: ");
    scanf("%s", &name);
    printf("The first name contains %d characters", nameLength(name));
}

int nameLength(char aname[]) {
    int x = 0;
    while (aname[x] != '\0')
        x++;
    return x;
    return (EXIT_SUCCESS);
}

