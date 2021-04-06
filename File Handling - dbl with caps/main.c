/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   dbl_with_caps.c
 * Author: Logicx
 *
 * Created on October 2, 2020, 3:14 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
FILE*gfopen(char *file_name, char *fmode);

int main(int argc, char** argv) {
    int c;
    FILE *fp, *tmp_file;

    if (argc != 2) {
        fprintf(stderr, "\n%s%s%s\n\n%s\n\n", "Usage: ", argv[0], " filename",
                "The file will be doubled and some letters capitalized. ");
        exit(1);
    }

    fp = gfopen(argv[1], "r+");
    tmp_file = tmpfile();

    while ((c = getc(fp)) != EOF)
        putc(toupper(c), tmp_file);
    rewind(tmp_file);
    fprintf(fp, "---\n");
    while ((c = getc(tmp_file)) != EOF)
        putc(c, fp);
    return (EXIT_SUCCESS);
}

FILE*gfopen(char* file_name, char* fmode) {
    FILE *fp;
    if ((fp = fopen(file_name, fmode)) == NULL)
        fprintf(stderr, "Cannot open %s - bye!\n", file_name);
    exit(1);
    return fp;
}