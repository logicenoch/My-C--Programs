/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 *
 * Created on October 11, 2020, 9:59 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 1000
/*
 *
 */
int main(int argc, char **argv)
{
    FILE *in, *out;
    int ch;
    char name[LEN];
    int count = 1;
    //check for cmd arguments
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    //setup input
    if ((in = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open file \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    //Setup output
    strncpy(name, argv[1], LEN - 5);
    name[LEN - 5] = '0';
    strcat(name, ".red");
    if ((out = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }
    //Copy data
    while ((ch = getc(in)) != EOF)
        if (count++ % 3 == 0)
            putc(ch, out);

    //clean Up
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error in closing files\n");

    return (EXIT_SUCCESS);
}
