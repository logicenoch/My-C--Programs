/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: USER
 *
 * Created on August 30, 2019, 5:06 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int main(void) {
       printf("\tENOCH'S COMMISSION CALCULATOR\n");

    int iRate=0;
    float fSalesPrice=0;
    float fCost=0;
    float fCommission=0;

    printf("\nEnter The Cost Price: ");
    scanf("%f",&fCost);

    printf("\nEnter The Sale Price: ");
    scanf("%f",&fSalesPrice);

    printf("\nEnter The Rate Value: ");
    scanf("%d",&iRate);

    fCommission = iRate * (fSalesPrice - fCost);

    printf("\nCommission = ");
    printf("%.2f",fCommission);
    printf(" Naira\n");

    return (0);
}

