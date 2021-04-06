/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 *
 * Created on October 14, 2020, 2:24 PM
 */

#include <stdio.h>
#include <stdlib.h>

char *sgetsting(unsigned string_len, FILE *in)
{
    int i;
    char *string;
    for (i = 0; i < string_len; i++)
        string[i] = getc(in);
    string[++i] = '\0';
    return string;
}

void sputstring(char *string, FILE *out)
{
    int i = 0;
    while (string[i] != '\0')
        putc(string[i++], out);
}

/*
 *
 */
int main(int argc, char **argv)
{
    FILE *in;
    char *string = "The guy is irresponsible.";
    in = fopen(argv[2], "w");
    sputstring(string, in);
    fclose(in);
    return (EXIT_SUCCESS);
}
