/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "find_roots.h"

dbl f1(dbl x) {
    return (x * x * x - x * x + 2.0 * x - 2.0);
}

dbl f2(dbl x) {
    return (sin(x) - 0.7 * x * x * x + 3.0);
}

dbl f3(dbl x) {
    return (exp(0.13 * x) - x * x * x);
}