/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Counting Program.c
 * Author: SiMpLy EnOcH
 *
 * Created on September 16, 2019, 5:23 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    printf("\tWELCOME TO MY COUNTING PROGRAM");
    int iBegNum, iEndNum, increNum, y;
    printf("\nEnter Your Initial Integer: ");
    scanf("%d", &iBegNum);
    system("clear");
    
    printf("\tWELCOME TO MY COUNTING PROGRAM");
    printf("\nEnter Your Terminating Integer: ");
    scanf("%d", &iEndNum);
    system("clear");
    
    printf("\tWELCOME TO MY COUNTING PROGRAM");
    printf("\nEnter Your Incrementing Integer: ");
    scanf("%d", &increNum);
    system("clear");
    
    printf("\tOUTPUT");
    while (iBegNum < iEndNum){
        y = iBegNum++ * increNum;
        
        printf("\nCounting: %d", y);
    }

    return (EXIT_SUCCESS);
}

