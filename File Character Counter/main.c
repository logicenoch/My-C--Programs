/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 *
 * Created on October 11, 2020, 10:06 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
void chk_cmd(int no_args);

int main(int argc, char **argv)
{
    int ch;
    FILE *in;
    unsigned long count = 0;

    if (argc != 2)
    {
        fprintf(stderr, "Invalid arguments! - filename: %s", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((in = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "%s cannot open\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(in)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }

    printf("\n%s contains %d characters\n", argv[1], count);
    return (EXIT_SUCCESS);
}
