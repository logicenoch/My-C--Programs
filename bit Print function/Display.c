/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Bit Fnts.h"

void InitialDispaly(void){
    printf("\t<<<BIT MANIPULATION SOFTWARE>>>\n"
            "This Software was created by Okeke Enoch Chibuzo -> (FoCUS)\n"
            "This program is specifically meant for system/low-level \n"
            "programmers. This program contains 3 operations for mani-\n"
            "pulation of binaries/bits.\n"
            "This program can be accessed by inputing different numerical\n"
            "keys i.e Input 1,2,3 or q to make selections.\n"
            "NOTE:\n "
            "1.The Bit Rotation module of program can only accept unsigned\n"
            "datatype.\n"
            "2.The Binary Equivalent Module can only accept int datatype.\n"
            "3.The Packing n Unpacking Module can only accept char datatype.\n"
            "\n\t|-|A PRODUCT OF SOFTWAREGOD INC.|-|");   
}

void pause(int inum) {
    int iCurrentTime = 0;
    int iElapsedTime = 0;
    iCurrentTime = time(NULL);

    do {
        iElapsedTime = time(NULL);
    } while ((iElapsedTime - iCurrentTime) < inum);
}

void FinalDispay(){
    printf(" Hope you enjoyed the amazing Functionality of this software!\n"
            "Contacts:\n"
            "Mobile: +2349833629167\n"
            "Email 1: successenochokeke@gmail.com\n"
            "Email 2: splendidjnr@outlook.com\n"
            "Email 3: rutherfordswitch@gmail.com\n"
            "Just Know That Enoch -> (FoCuS) Coded This!");
}