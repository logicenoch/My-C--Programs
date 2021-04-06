/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "F As Para.h"

double sum_sqr(double f(double x), int m, int n) {
    int k;
    double sum = 0.0;
    for (k = m; k <= n; ++k)
        sum += f(k) * f(k);
    return sum;
}