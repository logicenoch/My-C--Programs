/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Probab.c
 * Author: USER
 *
 * Created on October 21, 2019, 8:19 PM
 */
#include <stdio.h>
#include "prob.h"

/*
 * 
 */
int main(int argc, char** argv) {

    printf(":::::TEST FOR RANDOM NUMBERS:::::");
    double sum;
    sum = hundred();
    printf("Sum Of Random Numbers From 100.c: %f\n", sum);
    double average = sum / 100;
    printf("The average is %f", average);

    
    sum = Thousand();
    printf("Sum Of Random Numbers From 1000.c: %f\n", sum);
    average = sum / 1000;
    printf("The average is %f", average);

    return 0;
}

