/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 *
 * Created on October 11, 2020, 11:27 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define LEN 81
#define CTRL_Z '/032'
/*
 *
 */
int main(int argc, char **argv)
{
    char file[LEN], ch;
    FILE *in, *out;
    long count, last;

    puts("Enter the name of the file to be proccessed: ");
    scanf("%80s", file);

    if ((in = fopen(file, "r")) == NULL)
    {
        fprintf(stderr, "Can't Open file \"%s\"", file);
        exit(EXIT_FAILURE);
    }
    if ((out = fopen("reversed.txt", "w")) == NULL)
    {
        fprintf(stderr, "Can't Open file \"%s\"", "reversed.txt");
        exit(EXIT_FAILURE);
    }

    fseek(in, 0L, SEEK_END);
    last = ftell(in);

    for (count = 1L; count <= last; count++)
    {
        fseek(in, -count, SEEK_END);
        ch = getc(in);

        if (ch != CTRL_Z && ch != '\r')
            putc(ch, out);
    }
    putchar('\n');
    puts("Reversing Successful!");
    fclose(in);
    fclose(out);
    return (EXIT_SUCCESS);
}
