/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   100.c
 * Author: USER
 *
 * Created on October 21, 2019, 8:25 PM
 */
#include <stdio.h>
#include "prob.h"

/*
 * 
 */
double hundred(void) {
    int i;
    double sumh = 0.0;
    for (i = 0; i < 100; i++) {
        double firstrand = probability();
        sumh += firstrand;
    }
    return sumh;
}

