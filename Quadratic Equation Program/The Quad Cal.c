/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   The Quad Cal.c
 * Author: Simply Enoch
 *
 * Created on October 16, 2019, 1:07 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {

    printf("\tTHE QUADRATIC CALCULATOR\t\n\n");

    float a = 0, b = 0, c = 0, D, power, root1, root2, x, Real_part, Complex_Part;
    char NegRoot = 'i';
    printf("Enter The Value Of (a): "), scanf("%f", &a);
    printf("Enter The Value Of (b): "), scanf("%f", &b);
    printf("Enter The Value Of (c): "), scanf("%f", &c);
    power = pow(b, 2), D = power - 4 * a * c;
    printf("\nThe Value Of The Discriminant is %.3f", D);

    if (b == 0 && a == 0) {
        printf("\n\nExtremely Degenerate!");
    }
    if (a == 0 && b != 0) {
        printf("\n\nDegenerate!");
        printf("\nThe value of X is %f", x = -b / c);
    }
    if (D < 0) {
        if (a != 0) {
            root1 = 1 / 2 * a * (-b + sqrt(D));
            Real_part = 0.5 * a * -b;
            Complex_Part = 0.5 * sqrt(-D);
            printf("\n\nTwo Complex Roots: Root 1 = %f + i*%f\n                   "
                    "Root 2 = %f - i*%f", Real_part, Complex_Part, Real_part, Complex_Part);
        }
    }
    if (D > 0) {
        if (a != 0) {
            root1 = 0.5 * a * (-b + sqrt(D));
            Real_part = 0.5 * a * -b;
            Complex_Part = 0.5 * sqrt(D);
            printf("\n\nTwo Real Roots: Root 1 = %f\n                Root 2 = %f", Real_part + Complex_Part, Real_part - Complex_Part);
        }
    }
Dzero:
    if (D == 0) {
        root1 = 0.5 * a * (-b + sqrt(D));
        Real_part = 0.5 * a * -b;
        Complex_Part = 0.5 * sqrt(D);
        printf("\n\nTwo Real & Equal Roots: Root 1 = %f\n                        Root 2 = %f", Real_part + Complex_Part, Real_part - Complex_Part);
    }
}


