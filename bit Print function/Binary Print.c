/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "Bit Fnts.h"

void bit_print(unsigned a) {
    int i;
    /*Line 41: We use sizeof function in other to get the byte word of int values, 
     * since the byte word of int is machine dependent. n will be initialized 
     * to 16 or 32 byte words.
     */
    short n = sizeof (unsigned) * CHAR_BIT; /*CHAR_BIT is limits.h*/
    unsigned mask = 1 << (n - 1); /*100...0*/

    for (i = 1; i <= n; ++i) {
        putchar(((a & mask) == 0) ? '0' : '1');
        a <<= 1;
        if (i % CHAR_BIT == 0 && i < n)
            putchar(' ');
    }
    putchar('\n');
}