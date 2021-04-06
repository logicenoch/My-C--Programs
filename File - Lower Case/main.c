/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 *
 * Created on October 13, 2020, 7:39 PM
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXSTRING 100

/*
 *
 */
int main(int argc, char **argv) {
    char command[MAXSTRING], *tmp_filename;
    int c;
    FILE *ifp;
    tmp_filename = tmpnam(NULL);
    sprintf(command, "dir > %s", tmp_filename);
    system("command");
    ifp = fopen(tmp_filename, "r");
    while ((c = getc(ifp)) != EOF)
        putchar(islower(c));
    remove(tmp_filename);
    return (EXIT_SUCCESS);
}
