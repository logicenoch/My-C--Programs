/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Bit Fnts.h"

int MainMenu() {
    int n;
    do {
        printf("Main Menu:\n"
                "1. Binary Equivalence.\n"
                "2. Packing and Unpacking.\n"
                "3. Bit Rotations.\n"
                "   input '4' to quit");
        printf("\nMake Selection: ");
        scanf("%d", &n);
        if (n == 4) {
            printf("PROGRAM TERMINATED: GOOD BYE!\n");
            FinalDispay();
            exit(0);
        } else continue;
        putchar('\n');
    } while (!(n >= 1 && n <= 4));
    return n;
}

int Rotation_Menu() {
    int n;
    do {
        printf("Rotation Type:\n"
                "1. Left Bit Shift Rotation.\n"
                "2. Right Bit Shift Rotation.\n"
                "3. Show Both.\n"
                "   input '4' to quit");
        printf("\nMake Selection: ");
        scanf("%d", &n);
        if (n == 4) {
            printf("PROGRAM TERMINATED: GOOD BYE!\n");
            FinalDispay();
            exit(0);
        } else continue;
        putchar('\n');
    } while (!(n >= 1 && n <= 4));
    return n;
}