/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: USER
 *
 * Created on December 5, 2019, 9:19 PM
 */

#include <stdlib.h>

#include "find_roots.h"

int cnt =0;
const dbl eps = 1e-13;

int main(int argc, char** argv) {
    int begin_cnt;
    int i;
    int nfct_calls;
    dbl a = -100.0;
    dbl b = +100.0;
    dbl root;
    dbl val;
    pfdd f[N] = {NULL, f1, f2, f3};
    for (i = 0; i < N; ++i) {
        assert(f[i](a) * f[i](b) <= 0.0);
        begin_cnt = cnt;
        root = bisection(f[i], a, b);
        nfct_calls = cnt - begin_cnt;
        val = f[i](root);
        printf("%s%d%s%.15f\n%s%d%s%.15f\n%s%3d\n\n",
                "For f[", i, "](x) an approximate root is x0 =", root,
                "Fct evaluation at the root: f[", i, "](x0)= ", val,
                "Number of fct calls to bisection() =", nfct_calls);
    }
    return EXIT_SUCCESS; 
            
}

