/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 *
 * Created on October 12, 2020, 11:42 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81

void append(FILE *source, FILE *dest);
char *s_gets(char *st, int n);
/*
 *
 */
int main(int argc, char **argv)
{
    FILE *fa, *fs;       //fa = append file pointer | fs = source file pointer.
    int files = 0;       //No of appended files
    char file_app[SLEN]; //name of append file
    char file_src[SLEN]; //name of source file
    int ch;

    puts("Enter the name of destination file: ");
    s_gets(file_app, SLEN);

    if ((fa = fopen(file_app, "a+")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", file_app);
        exit(EXIT_FAILURE);
    }

    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("Can't create output buffer\n", stderr);
        exit(EXIT_FAILURE);
    }

    puts("Enter the name of the first file source(enmpty line to quit): ");
    while (s_gets(file_src, SLEN) && file_src[0] != '\0')
    {

        if (strcmp(file_src, file_app) == 0)
            fputs("Can't append file to itself\n", stderr);
        else if ((fs = fopen(file_src, "r")) == NULL)
            fprintf(stderr, "Can't open %s\n", file_src);
        else
        {
            if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
            {
                fputs("Cant't create input buffer\n", stderr);
                continue;
            }
            append(fs, fa);
            if (ferror(fs) != 0)
                fprintf(stderr, "Error in reading file! %s\n", file_src);
            if (ferror(fa) != 0)
                fprintf(stderr, "Error in writing file! %s\n", file_app);
            fclose(fs);
            files++;
            printf("File %s appended.\n", file_src);
            puts("Next file (empty line to quit): ");
        }
    }

    printf("Files done appending. %d files appended.\n", files);
    rewind(fa);
    while ((ch = getc(fa)) != EOF)
        putchar(ch);
    puts("Done displaying.\n");
    fclose(fa);
    return (EXIT_SUCCESS);
}

void append(FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE]; //Allocate once

    while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
        fwrite(temp, sizeof(char), bytes, dest);
}
char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n'); //Look for a new line.
        if (find)                //If the address is not NUL.
            *find = '\0';        //Place a null xter there.
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}