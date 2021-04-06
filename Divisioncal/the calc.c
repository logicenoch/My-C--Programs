/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   the calc.c
 * Author: USER
 *
 * Created on August 30, 2019, 5:46 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
        printf("\nWELCOME TO TESLA'S DIVISION CALCULATOR\n");

    int iFirst=0;
    int iSecond=0;
    int iResult=0;
    int iMod;

    printf("\nEnter First Number: ");
    scanf("%d",&iFirst);

    printf("\nEnter Second Number: ");
    scanf("%d",&iSecond);

    iResult = iFirst / iSecond;
    printf("\nResult = %d ", iResult);

    iMod =iFirst%iSecond;
    printf("r %d\n",iMod);
    
    return (EXIT_SUCCESS);
}

    

