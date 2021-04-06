/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   The Trig Cal.c
 * Author: Simply Enoch
 *
 * Created on October 9, 2019, 11:47 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include  <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float step_value = 20;
    float x;

    printf("Angles\t\t Cos(x)\t\t Sin(x)\t\t Tan(x)");
    for (x = 0; x <= 360; x += step_value) {
        printf("\n%.1f\t\t%.4f\t\t%.4f\t\t%.4f\n", x, cos(x), sin(x), tan(x));
    }
    return (EXIT_SUCCESS);
}

