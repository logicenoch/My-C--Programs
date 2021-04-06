/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "F As Para.h"
/* 
 * File:   Function As Parameter.c
 * Author: USER
 *
 * Created on November 30, 2019, 3:40 PM
 */

/*
 * 
 */
int main(int argc, char** argv) {
    printf("%s %f\n%s %f", "First Computation:", sum_sqr(sin, 2, 13),
            "Second Computation:", sum_sqr(f, 1, 1000));
    return (EXIT_SUCCESS);
}

