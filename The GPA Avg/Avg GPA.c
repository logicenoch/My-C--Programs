/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Avg GPA.c
 * Author: SiMpLy EnOcH
 *
 * Created on September 27, 2019, 2:40 AM
 */

#include <stdio.h>
#include <stdlib.h>
#define N 30

int main(int argc, char *argv)
{

    float GPA[N], Average, divisor, sum;
    int i, iActive;

    for (i = 0; i < N; i++)
        GPA[i];

    for (i = 0; i < N; i++)
    {
        printf("Enter GPA: ");
        scanf("%f", &GPA[i]);
        sum += GPA[i];
        divisor++;

        printf("\n1.Calculate The Current GPA Average.");
        printf("\n2.Enter Another GPA.\n");
        printf("\nSelect Activity: ");
        scanf("%d", &iActive);

        switch (iActive)
        {
        case 1:
            Average = sum / divisor;
            printf("Your Average GPA Is %.2f", Average);
            return EXIT_SUCCESS;
        case 2:
            continue;
        }
    }
}
