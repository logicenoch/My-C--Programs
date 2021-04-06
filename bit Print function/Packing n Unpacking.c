/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Bit Fnts.h"

char unpack(int p, int ByteId) {
    int n = ByteId * CHAR_BIT;
    unsigned mask = 255;

    mask <<= n;
    return ((p & mask) >> n);
}

int pack(char a, char b, char c, char d) {
    int p = a; // a,b,c,d will be packed into p.

    p = (p << CHAR_BIT) | b;
    p = (p << CHAR_BIT) | c;
    p = (p << CHAR_BIT) | d;
    return p;

}