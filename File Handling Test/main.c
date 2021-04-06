/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 *
 * Created on September 30, 2020, 4:11 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int main(int argc, char** argv) {
    int a, sum = 0;
    FILE *ifp, *ofp;
    if (fopen("my_file", "r") != NULL)
        ifp = fopen("my_file", "r");
    else
        printf("Create a file first to proceed\n");
    ofp = fopen("out_file", "w");

    while (fscanf(ifp, "%d", &a) == 1)
        sum += a;
    fprintf(ofp, "The sum: %d", sum);
    printf("Binary file exported!\n");
    fclose(ifp);
    fclose(ofp);

    return (EXIT_SUCCESS);
}

