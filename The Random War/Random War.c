/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Random War.c
 * Author: USER
 *
 * Created on October 8, 2019, 9:48 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NCALLS 1000000000 //Number of function calls
#define NCOLS  8        //Number of columns
#define NLINES 3        //Number of lines

    int main(int argc, char *argv) {
        int i, val;
        long begin, diff, end;

        begin = time(NULL);
        srand(time(NULL));
        printf("TIMING TEST: %d calls to random()\n\n", NCALLS);
        for (i = 1; i <= NCALLS; ++i) {
            val = rand();
            if (i <= NCOLS * NLINES) {
                printf("%7d\t", val);
                if (i % NCOLS == 0)
                    putchar('\n');
            } else if (i == NCOLS * NLINES + 1)
                printf("%7s\n\n", ".....");
        }
        end = time(NULL);
        srand(time(NULL));
        diff = end - begin;
        printf("%s%ld\n%s%ld\n%s%ld\n%s%.10f\n\n", "end time: ", end, "begin time: ", begin, "elapsed time: ", diff, "Time for each call: ", ((double) diff) / NCALLS);
        return (EXIT_SUCCESS);
    }

