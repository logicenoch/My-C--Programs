/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Compact Header.h"

void bit_print(int a) {
    int i;
    short n = sizeof (int) * 4; /*CHAR_BIT is limits.h*/
    int mask = 1 << (n - 1); /*100...0*/

    for (i = 1; i <= n; ++i) {
        putchar(((a & mask) == 0) ? '0' : '1');
        a <<= 1;
        if (i % 4 == 0 && i < n)
            putchar(' ');
    }
    putchar('\n');
}
