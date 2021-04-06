/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 *
 * Created on September 30, 2020, 4:37 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void double_space(FILE *, FILE *, int);

int main(int argc, char **argv)
{
    FILE *ifp, *ofp;
    int space_num;
    //Checks the validity of the command-line arguments
    if (argc != 4)
    {
        fprintf(stderr, "ERROR: Too few or many arguments\nUsage: %s -n infile outfile", argv[0]);
        exit(EXIT_FAILURE);
    }
    //Scans the command-line second argument
    sscanf(argv[1], "%d", &space_num);
    space_num = abs(space_num);

    //Checks if the in-file can be open to be read from.
    if ((ifp = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "ERROR: Can't open file - %s", argv[1]);
        exit(EXIT_FAILURE);
    }

    //Checks if the out-file can be open to be written to.
    if ((ofp = fopen(argv[3], "w")) == NULL)
    {
        fprintf(stderr, "ERROR: Can't open file - %s", argv[2]);
        exit(EXIT_FAILURE);
    }

    double_space(ifp, ofp, space_num);
    //Closes the two files
    fclose(ofp);
    fclose(ifp);

    return (EXIT_SUCCESS);
}

void double_space(FILE *ifp, FILE *ofp, int spaces)
{
    char c;
    if (spaces == 1)
    {
        while ((c = getc(ifp)) != EOF)
        {
            putc(c, ofp);
            if (c == '\n')
                putc('\n', ofp);
        }
    }
    else if (spaces == 2)
    {
        while ((c = getc(ifp)) != EOF)
        {
            putc(c, ofp);
            if (c == '\n')
            {
                putc('\n', ofp);
                putc('\n', ofp);
            }
        }
    }
    else if (spaces == 3)
    {
        while ((c = getc(ifp)) != EOF)
        {
            putc(c, ofp);
            if (c == '\n')
            {
                putc('\n', ofp);
                putc('\n', ofp);
                putc('\n', ofp);
            }
        }
    }
    else
        printf("Second command-line argument out of range\n");
}
