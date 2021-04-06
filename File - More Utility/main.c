/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Okeke Enoch Chibuzo - Logicx
 *
 * Created on October 15, 2020, 11:24 AM
 */

#include <stdio.h>
#include <stdlib.h>

void more_utility(FILE *, int);

void more_utility(FILE *in, int MAXLINE)
{
    int newln_cnt = 0;
    char ch;
    while ((ch = getc(in)) != EOF)
    {
        putc(ch, stdout);
        if (ch == '\n')
            newln_cnt++;
        if (newln_cnt == MAXLINE)
        {
            ch = getc(stdin);
            newln_cnt = 0;
        }
        if (ch == '\r')
            continue;
    }
    return;
}

int main(int argc, char **argv)
{
    FILE *ifp;
    int MAXLINE;

    //Checks the validity of the command-line arguments
    if (argc != 3)
    {
        fprintf(stderr, "ERROR: Too few or many arguments\nUsage: %s -n infile outfile", argv[0]);
        exit(EXIT_FAILURE);
    }

    //Scans the command-line second argument
    if ((sscanf(argv[1], "%d", &MAXLINE)) == 0)
    {
        fprintf(stderr, "ERROR: Second command-line argument out of range\nUsage:%s -n infile.txt", argv[0]);
        exit(EXIT_FAILURE);
    }
    MAXLINE = abs(MAXLINE);

    //Checks if the in-file can be open to be read from.
    if ((ifp = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "ERROR: Can't open file - %s", argv[2]);
        exit(EXIT_FAILURE);
    }
    more_utility(ifp, MAXLINE);
    fclose(ifp);
    return (EXIT_SUCCESS);
}
