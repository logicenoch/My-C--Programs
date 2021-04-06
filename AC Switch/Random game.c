/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: USER
 *
 * Created on August 30, 2019, 4:45 AM
 */

#include <stdio.h>
#include <stdlib.h>
#define pi 3.12
/*
 * 
 */
main() {
     float fRaduis;

    printf("\nWelcome To Tesla's Area Of A Circle Calculator\n");

    printf("\nEnter The Value Of The Radius Of The Circle: ");
    scanf("%f",&fRaduis);

    printf("\nArea Of The Circle: %.2f\n",pi*fRaduis*fRaduis);
    return (0);

    return (EXIT_SUCCESS);
}

