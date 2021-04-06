/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "hanoi.h"

void move(register long n, char a, char b, char c) {
    if (n == 1) {
        ++cnt;
        printf("%7ld: %s%ld%s%c%s%c.\n", cnt, "Move disk ", 1, " from tower ", a, " to tower ", c);
    } else {
        move(n - 1, a, c, b);
        ++cnt;
        printf("%7ld: %s%ld%s%c%s%c.\n", cnt, "Move disk ", n, " from tower ", a, " to tower ", c);
        move(n - 1, b, a, c);
    }
}
