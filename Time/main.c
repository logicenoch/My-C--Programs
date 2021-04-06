/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 *
 * Created on October 14, 2020, 3:30 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 1000000000
#define MAXSRING 100

typedef struct {
    clock_t begin_clock, save_clock;
    time_t begin_time, save_time;
} time_keeper;

static time_keeper tk;

void start_time(void) {

    tk.begin_clock = tk.save_clock = clock();
    tk.begin_time = tk.save_time = time(NULL);
}

double prn_time(void) {
    char s1[MAXSRING], s2[MAXSRING];
    int fieldwidth, n1, n2;
    double clock_per_sec = (double) CLOCKS_PER_SEC, user_time, real_time;

    user_time = (clock() - tk.save_clock) / clock_per_sec;
    real_time = difftime(time(NULL), tk.save_time);
    tk.save_clock = clock();
    tk.save_time = time(NULL);

    n1 = sprintf(s1, "%.1f", user_time);
    n2 = sprintf(s2, "%.1f", real_time);
    fieldwidth = (n1 > n2) ? n1 : n2;
    printf("%s %*.1f %s\n%s %*.1f  %s\n\n",
            "User time: ", fieldwidth, user_time, " seconds",
            "Real time: ", fieldwidth, real_time, " seconds"
            );
    return user_time;
}

int main(int argc, char** argv) {
    long i;
    float a, b = 3.333, c = 5.555;
    double x, y = 3.333, z = 5.555;
    printf("Number of multiples: %d\n\n", N);
    printf("Type float:\n\n");
    start_time();
    for (i = 0; i < N; ++i) {
        a = b*c;
    }
    prn_time();
    printf("Type double:\n\n");
    for (i = 0; i < N; ++i) {
        x = y*z;
    }
    prn_time();
    return (EXIT_SUCCESS);
}

