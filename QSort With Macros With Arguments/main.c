/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Logic
 *
 * Created on March 30, 2020, 10:16 AM
 */

#include "sort.h"

/*
 * 
 */
int main(int argc, char** argv) {
    char a[M];
    float b[N];
    int i;

    srand(time(NULL));
    FILL(a, M, "char");
    PRINT(a, M, "%-2c");
    qsort(a, M, sizeof(char), lexico);
    PRINT(a, M, "%-2c");
    printf("---\n");
    FILL(b, N, "float");
    PRINT(b, N, "%-6.1f");
    qsort(b, N, sizeof (float), compare_fractional_part);
    PRINT(b, N, "%-6.1f");
    return 0;
}

