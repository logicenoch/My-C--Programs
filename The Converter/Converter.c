/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Converter.c
 * Author: Simply Enoch
 *
 * Created on October 8, 2019, 10:03 AM
 */

#include <stdio.h>
#include <stdlib.h>
#define ONE_CM_TO_M 0.01
#define ONE_M_TO_CM 100
#define ONE_KM_TO_M 1000
#define ONE_M_TO_KM 0.001

int main(void)
 {
    int iActive;
    float Meters = 0, Kilometers = 0, Centimeters = 0;
    float cal;
    printf("\t**************************************\n");
    printf("\t*WELCOME TO THE CONVERSION CALCULATOR*\n");
    printf("\t**************************************\n\n");
    printf("1.Convert Meters to KiloMeters\n2.Covert Centimeters to Meters\n3.Convert Kilometers to Meters\n");
    printf("\nSelect Activity: "),scanf("%d", &iActive);

    switch (iActive) {
        case 1:
            printf("\nMETERS TO KILOMETERS\n");
            printf("\nEnter Your Value(m): ");
            scanf("%f", &Meters);
            printf("\nYour Value in Kilometer(s) is %.3fKM", Meters * 1 / ONE_KM_TO_M);
        case 2:
            printf("\nCENTIMETERS TO METERS\n");
            printf("\nEnter Your Value(cm): ");
            scanf("%f", &Centimeters);
            printf("\nYour Value in Meter(s) is %.3fm", Centimeters * 1 / ONE_M_TO_CM);
        case 3:
            printf("\nKILOMETERS TO METERS\n");
            printf("\nEnter Your Value(Km): ");
            scanf("%f", &Kilometers);
            printf("\nYour Value in Meter(s) is %.3fm", Kilometers * 1 / ONE_M_TO_KM);
    }
    return 0;
}


