/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: USER
 *
 * Created on January 31, 2020, 8:23 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*
 * Pack four characters into an int.
 */

int pack(char a, char b, char c, char d) {
    int p = a; // a,b,c,d will be packed into p.

    p = (p << CHAR_BIT) | b;
    p = (p << CHAR_BIT) | c;
    p = (p << CHAR_BIT) | d;
    return p;

}

char unpack(int p, int k) {
    int n = k* CHAR_BIT;
    unsigned mask = 255;

    mask <<= n;
    return ((p & mask) >> n);
}

int main(int argc, char *argv[]) {
    printf("abcd = ");
    int packed = pack('k', 'b', 'c', 'd');
    printf("Int value of packed is %d", packed);
    putchar('\n');
    for (int i = 3; i >= 0; i--)
        printf("%c", unpack(packed, i));
}

