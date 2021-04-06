/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 *
 * Created on October 17, 2020, 8:23 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef char *string;

void get_info(string fname, int *n_ptr) {
    printf("\n%s\n\n%s", "This program creates a file of random numbers.",
            "How many random numbers will you like?");
    scanf("%d", n_ptr);
    printf("\nIn what file would you like?");
    scanf("%s", fname);
}

FILE *gfopen(string filename, string mode) {
    FILE *fp;
    if ((fp = fopen(filename, mode)) == NULL) {
        fprintf(stderr, "ERROR: Can't open file - %s", filename);
        exit(EXIT_FAILURE);
    }
    return fp;
}

FILE *cfopen(string filename, char *mode) {
    char reply[2];
    FILE *fp;
    if (strcmp(mode, "w") == 0 && access(filename, F_OK) == 0) {
        printf("\nFile Exists  Overwrite it?");
        scanf("%1s", reply);
        if (*reply != 'y' || *reply != 'Y') {
            printf("\nbye!\n");
            exit(EXIT_FAILURE);
        }
    }
    fp = gfopen(filename, mode);
    return fp;
}

/*
 *
 */
int main(int argc, char **argv, char **env) {
    char c, s[] = "abc", *p = s;
    int i;
    FILE *ofp1, *ofp2;

    ofp1 = fopen("tmp1.txt", "w");
    ofp2 = fopen("tmp2.txt", "w");

    for (i = 0; i < 3; ++i) {
        sscanf(s, "%c", &c);
        fprintf(ofp1, "%c", c);
    }

    for (i = 0; i < 3; ++i) {
        sscanf(p, "%c", &c);
        fprintf(ofp2, "%c", c);
    }
}
