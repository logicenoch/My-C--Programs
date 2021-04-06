/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cupcake Random.c
 * Author: USER
 *
 * Created on October 8, 2019, 9:54 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float median;
    median = RAND_MAX / 2;
    int i, larger = 0, smaller = 0;
    srand(time(NULL));

    for (i = 0; i < 500; i++) {
        if (i % 10 == 0) 
            putchar('\n');
            printf("%d \t", rand());
            if (rand() > median)
                larger++;
            if (rand() < median)
                smaller++;
        
    }
    printf("\n%s%d\n%s%d\n", "Lager: ", larger, "Smaller: ", smaller);
    if (larger > smaller) {
        printf("The difference between the two is %d\n", larger - smaller);
    } else {
        printf("The difference between the two is %d\n", smaller - larger);
    }

    return (EXIT_SUCCESS);
}

