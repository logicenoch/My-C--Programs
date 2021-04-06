/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 *
 * Created on October 29, 2020, 6:29 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define N 3
/*
 *
 */
int add_vector(int[]);
void error_exit(char *s);
int fork(void);
int pipe(int pd[2]);
int read(int fd, void *buf, unsigned len);
int write(int fd, void *buf, unsigned len);

int main(int argc, char **argv)
{
    int a[N][N] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    int i, row_sum, sum = 0, pd[2];

    if (pipe(pd) == -1)
        error_exit("pipe() failed");
    for (i = 0; i < N; ++i)
        if (fork == 0)
        {
            row_sum = add_vector(a[i]);
            if (write(pd[1], &row_sum, sizeof(int)) == -1)
                error_exit("read() failed");
            sum += row_sum;
        }
    printf("Sum of the array = %d\n", sum);
    return (EXIT_SUCCESS);
}

int add_vector(int v[])
{
    int i, vector_sum = 0;

    for (i = 0; i < N; ++i)
        vector_sum += v[i];
    return vector_sum;
}

void error_exit(char *s)
{

    fprintf(stderr, "\nERROR: %s - bye!\n", s);
    exit(1);
}