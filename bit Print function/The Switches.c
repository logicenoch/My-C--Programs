/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Bit Fnts.h"

void Selection(int n) {
    MainSelection MainMenuValue;
    switch (MainMenuValue) {
        case Binary_Equivalent:
            printf("\n\t|BINARY EQUIVALENCE|\n");
            printf("Input Integer: "), scanf("%d", &Integer);
            printf("Calculating...\n");
            printf("Binary Equivalence of %d is ", Integer), bit_print(Integer);
            break;
        case Packin_Characters:
            printf("\n\t|PACKING OF CHARACTERS|\n");
            char *a;
            a = calloc(sizeof (char), 5);
            printf("Input The 4 Characters with spaces: "), scanf("%c%c%c%c", &a[0], &a[1], &a[2], &a[3]);
            printf("Packing...\n"), pause(5);
            printf("%c-%c-%c-%c are packed in %d", a[0], a[1], a[2], a[3], pack(a[0], a[1], a[2], a[3]));
            printf("\nBinary Equivalence: "), bit_print(pack(a[0], a[1], a[2], a[3]));
            break;
        case Bit_Rotation:
            printf("\n\t|BIT ROTATION|\n");
            printf("Input Unsigned: "), scanf("%d", &Unsigned);
            printf("No Of Shifts: "), scanf("%d", &Bit_Shifts);
            printf("Binary Equivalence of Unsigned(%d): ", Unsigned), bit_print(Unsigned);
            printf("Select Rotation Type: ");
            RotationSelection RotationSelectionValue;
            switch (RotationSelectionValue = Rotation_Menu()) {
                case LBitSRotation:
                    printf("\t|LEFT BIT SHIFT ROTATION|\n");
                    printf("Data Before Rotation: %d", Unsigned);
                    printf("\nBit Shifts: %d", Bit_Shifts);
                    printf("\nBinary: "), bit_print(Unsigned);
                    printf("Data After Rotation: %d", LBitShiftRotation(Unsigned, Bit_Shifts));
                    printf("\nBinary: "), bit_print(LBitShiftRotation(Unsigned, Bit_Shifts));
                    break;

                case RBitSRotation:
                    printf("\t|RIGHT BIT SHIFT ROTATION|\n");
                    printf("Data Before Rotation: %d", Unsigned);
                    printf("\nBit Shifts: %d", Bit_Shifts);
                    printf("\nBinary: "), bit_print(Unsigned);
                    printf("Data After Rotation: %d", RBitShiftRotation(Unsigned, Bit_Shifts));
                    printf("\nBinary: "), bit_print(RBitShiftRotation(Unsigned, Bit_Shifts));
                    break;

                case Both:
                    printf("\t|BOTH DATA|");
                    printf("\nRIGHT BIT SHIFT ROTATION DATA: ");
                    printf("\nData Before Rotation: %d", Unsigned);
                    printf("\nBit Shifts: %d", Bit_Shifts);
                    printf("\nBinary: "), bit_print(Unsigned);
                    printf("Data After Rotation: %d", RBitShiftRotation(Unsigned, Bit_Shifts));
                    printf("\nBinary: "), bit_print(RBitShiftRotation(Unsigned, Bit_Shifts));

                    printf("\nLEFT BIT SHIFT ROTATION DATA: ");
                    printf("\nData Before Rotation: %d", Unsigned);
                    printf("\nBit Shifts: %d", Bit_Shifts);
                    printf("\nBinary: "), bit_print(Unsigned);
                    printf("Data After Rotation: %d", LBitShiftRotation(Unsigned, Bit_Shifts));
                    printf("\nBinary: "), bit_print(LBitShiftRotation(Unsigned, Bit_Shifts));
                    break;


                default:
                    printf("\nERROR: Input Correct Data!");
            }
    }

}
