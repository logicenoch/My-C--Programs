/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 *
 * Created on October 15, 2020, 1:00 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/unistd.h>

#define MAXLINE 100

void line_no(FILE *in, FILE *out) {
    int line_no = 1;
    char ch;
    //First, number the first line.
    fprintf(out, "%d. ", line_no++);
    while ((ch = getc(in)) != EOF) {
        putc(ch, out); //Write characters to the outfile.

        if (ch == '\n') //If you encounter the nextline '\n' character Write the line number to the outfile
            fprintf(out, "%d. ", line_no++);
    }
    return;
}

void finder(FILE *in, char *pattern) {
    char line[MAXLINE];
    putchar('K');
    while (fgets(line, MAXLINE, in) != NULL) {
        if (strstr(line, pattern) != NULL) {
            fprintf(stdout, "%s\n", line);
        }
    }
    return;
}

void finder_line_number(FILE *in, char *pattern) {
    char line[MAXLINE];
    FILE *tmp_file;

    tmp_file = tmpfile();

    line_no(in, tmp_file);
    rewind(tmp_file);

    while (fgets(line, MAXLINE, tmp_file) != NULL) {
        if (strstr(line, pattern) != NULL) {
            fprintf(stdout, "%s\n", line);
        }
    }
    fclose(tmp_file);
    return;
}

int main(int argc, char **argv) {
    FILE *ifp;
    int line_cnt = 1;
    if (strcmp(argv[1], "-n") == 0) {
        if (argc != 4) {
            fprintf(stderr, "ERROR: Too few or many arguments\nUsage: %s -n \"word\" infile", argv[0]);
            exit(EXIT_FAILURE);
        }

        //Checks if the in-file can be open to be read from.
        if ((ifp = fopen(argv[3], "r")) == NULL) {
            fprintf(stderr, "ERROR: Can't open file - %s", argv[3]);
            exit(EXIT_FAILURE);
        }
        finder_line_number(ifp, argv[2]);
    } else {
        if (argc != 3) {
            fprintf(stderr, "ERROR: Too few or many arguments\nUsage: %s \"word\" infile", argv[0]);
            exit(EXIT_FAILURE);
        }

        //Checks if the in-file can be open to be read from.
        if ((ifp = fopen(argv[2], "r")) == NULL) {
            fprintf(stderr, "ERROR: Can't open file - %s", argv[2]);
            exit(EXIT_FAILURE);
        }
        finder(ifp, argv[1]);
    }

    return (EXIT_SUCCESS);
}
