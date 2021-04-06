/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   find_roots.h
 * Author: USER
 *
 * Created on December 5, 2019, 9:20 PM
 */

#include <assert.h>
#include <math.h>
#include <stdio.h>

#define N 4

typedef double dbl;
typedef dbl (*pfdd)(dbl);
extern int cnt;
extern const dbl eps;

dbl bisection(pfdd f,dbl a,dbl b);
dbl f1(dbl x);
dbl f2(dbl x);
dbl f3(dbl x);


