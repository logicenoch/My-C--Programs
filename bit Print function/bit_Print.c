/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   bit_Print.c
 * Author: Copied it from a book.
 *
 * Created on January 23, 2020, 9:52 AM
 */

#include "Bit Fnts.h"

int main(int argc, char *argv[]) {

    int activity;
    char string;
start:
    printf("\t::::::::::::::::::::::::\n");
    printf("\t::::::::::::::::::::::::\n");
    printf("\t::::SOFTWAREGOD::INC::::\n");
    printf("\t::::CLEAN::SOFTWARES::::\n");
    printf("\t::::::::::::::::::::::::\n");
    printf("\t::::::::::::::::::::::::\n\n");
    printf("=>INPUT \"S\" TO USE SOFTWARE & \"T\" TO TERMINATE => ");
    scanf("%s", &string);

    if (string == 'S') {
        InitialDispaly();

        activity = MainMenu();

        Selection(activity);
    } else if (string == 'T')
        goto stop;
    else if (string != 'S')
        goto start;
stop:
    FinalDispay();
    return EXIT_SUCCESS;

}




