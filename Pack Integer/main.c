/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: USER
 *
 * Created on February 21, 2020, 1:40 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*
 * 
 */

int Pack_Integer(int);
void bit_print(int);

int PackInteger(int n) {
    int ByteWord = sizeof (int) * CHAR_BIT;
    int pack = 0, i = 1;
    while (n != 0 && i <= 8) {
        int rem = n % 10;
        pack |= rem << (ByteWord - sizeof (int)*i++);
        n /= 10;
    }
    return pack;

}

void bit_print(int a) {
    int i;
    short n = sizeof (int) * CHAR_BIT; /*CHAR_BIT is limits.h*/
    int mask = 1 << (n - 1); /*100...0*/

    for (i = 1; i <= n; ++i) {
        putchar(((a & mask) == 0) ? '0' : '1');
        a <<= 1;
        if (i % 4 == 0 && i < n)
            putchar(' ');
    }
    putchar('\n');
}

int main(int argc, char** argv) {
    int n;
    printf("<<THIS SOFTWARE PACKS STRINGS OF INTEGER INTO ONE INTEGER>>");
    putchar('\n');
    putchar('\n');
    printf("Input Integer: "), scanf("%d", &n);
    printf("Initial Bit Representation: ");
    bit_print(n);
    putchar('\n');
    printf("Packed Bit Representation: ");
    bit_print(PackInteger(n));



    return (EXIT_SUCCESS);
}

