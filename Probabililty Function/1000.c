/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1000.c
 * Author: USER
 *
 * Created on October 21, 2019, 8:25 PM
 */
#include "prob.h"
#include <stdio.h>
/*
 * 
 */
double Thousand(void) {
    int i;
    double sumt = 0.0;
    for (i = 0; i < 1000;i++) {
        double firstrand = probability();
        sumt += firstrand;
    }
    return sumt;
}
