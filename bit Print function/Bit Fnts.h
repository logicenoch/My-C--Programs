/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bit Fnts.h
 * Author: USER
 *
 * Created on February 15, 2020, 11:33 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>
#include <stddef.h>
#include <assert.h>

/*
 * This function uses mask to print\
 * the binary equivalence of a decimal 
 * number.
 */
int Unsigned, Integer, Bit_Shifts;

typedef enum {
    Binary_Equivalent = 1, Packin_Characters, Bit_Rotation, quit
} MainSelection;

typedef enum {
    LBitSRotation = 1, RBitSRotation, Both
} RotationSelection;
void Selection(int);

void bit_print(unsigned);
int pack(char, char, char, char);
char unpack(int, int);
unsigned LBitShiftRotation(unsigned, unsigned);
unsigned RBitShiftRotation(unsigned, unsigned);

void InitialDispaly(void);
void FinalDispay(void);
void pause(int);

int MainMenu(void);
int Rotation_Menu(void);



