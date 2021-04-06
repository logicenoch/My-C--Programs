/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: USER
 *
 * Created on March 2, 2020, 4:02 PM
 */
#include "Compact Header.h"

/*
 * 
 */
int main(int argc, char** argv) {
    unsigned Day, Month, Year, compact, i;
    printf("Enter (Day,Month,Year): ");
    scanf("%d %d %d", &Day, &Month, &Year);
    compact = Date(Day, Month, Year);
    printf("The Compact Date int Value is %d", Date(Day, Month, Year));
    printf("\nCompact in Binary: ");
    bit_print(compact);
    printf("Unpacking...\n");
    for (i = 0; i < 3; i++) {
        printf("%d", Unpack_Date(compact, i));
        putchar(' ');
    }
    putchar('\n');
    return (EXIT_SUCCESS);
}

