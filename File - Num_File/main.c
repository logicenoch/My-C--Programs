/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Okeke Enoch Chibuzo - Logicx
 * 
 *
 * Created on October 15, 2020, 12:23 AM
 */

#include <stdio.h>
#include <stdlib.h>

void line_no(FILE *, FILE *);

int main(int argc, char **argv)
{
    FILE *ifp, *ofp;

    //Checks the validity of the command-line arguments
    if (argc != 3)
    {
        fprintf(stderr, "ERROR: Too few or many arguments\nUsage: %s infile outfile", argv[0]);
        exit(EXIT_FAILURE);
    }

    //Checks if the in-file can be open to be read from.
    if ((ifp = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "ERROR: Can't open file - %s", argv[1]);
        exit(EXIT_FAILURE);
    }

    //Checks if the out-file can be open to be written to.
    if ((ofp = fopen(argv[2], "w")) == NULL)
    {
        fprintf(stderr, "ERROR: Can't open file - %s", argv[2]);
        exit(EXIT_FAILURE);
    }

    line_no(ifp, ofp);
    fclose(ifp);
    fclose(ofp);
    return (EXIT_SUCCESS);
}

void line_no(FILE *in, FILE *out)
{
    int line_no = 1;
    char ch;
    //First, number the first line. 
    fprintf(out, "%d. ", line_no++);
    while ((ch = getc(in)) != EOF)
    {
        putc(ch, out); //Write characters to the outfile.
       
        if (ch == '\n') //If you encounter the nextline '\n' character Write the line number to the outfile
            fprintf(out, "%d. ", line_no++);
    }
}
