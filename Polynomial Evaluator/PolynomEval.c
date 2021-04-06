/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PolynomEval.c
 * Author: USER
 *
 * Created on December 18, 2019, 9:36 AM
 */

#include "fnt deff.h"
int main(void) {
    printf("::::POLYNOMIAL EVALUATOR::::\n");
    int n = 2;
    //The coefficient of the polynomials f[] = {a, b, c}.
    double f[] = {2.0, 1.0, 3.0};
    //fnt calls for the two evaluation fnt.
    eval(f, 2, 2);
    horner(f, 2, 2);
}


