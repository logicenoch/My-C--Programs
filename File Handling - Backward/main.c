/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 *
 * Created on October 2, 2020, 11:25 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <unistd.h>
#define MAXSTRING 100

/*
 *
 */
int main(int argc, char **argv)
{
    char fname[MAXSTRING];
    int c;
    FILE *ifp;

    fprintf(stderr, "\n ]Input a file name :");
    scanf("%s", fname);
    ifp = fopen(fname, "rb"); //Binary Mode for MSDOS.
    fseek(ifp, 0, SEEK_END);  //Move to end of the file.
    fseek(ifp, -1, SEEK_CUR); //Backup one character.
    while (ftell(ifp) > 0)
    {
        c = getc(ifp); //Move ahead one character.
        putchar(c);
        fseek(ifp, -2, SEEK_CUR); //Backup two characters.
    }
    return (EXIT_SUCCESS);
}
