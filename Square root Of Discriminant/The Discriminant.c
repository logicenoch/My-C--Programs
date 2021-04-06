/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   The Discriminant.c
 * Author: Simply Enoch
 *
 * Created on October 15, 2019, 7:49 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 
 */

int main(int argc, char** argv) {
    printf("\tTHE SQUARE ROOT OF DISCRIMINANT\t\n\n");

    float a = 0, b = 0, c = 0, Discriminant, power;
    char NegRoot = 'i';
    printf("Enter The Value Of (a): "), scanf("%f", &a);
    printf("Enter The Value Of (b): "), scanf("%f", &b);
    printf("Enter The Value Of (c): "), scanf("%f", &c);
    power = pow(b, 2), Discriminant = power - 4 * a * c;
    printf("\nThe Value Of The Discriminant is %.3f", Discriminant);
    if (Discriminant > 0) {
        printf("\nThe Root Of The Discriminant is %f", sqrt(Discriminant));
        return EXIT_SUCCESS;
    }
    if (Discriminant < 0) {
        printf("\n\nThe Root Of The Discriminant is %c*%.6f",NegRoot, sqrt(-Discriminant));
        return EXIT_SUCCESS;
    }
    return (EXIT_SUCCESS);
}

