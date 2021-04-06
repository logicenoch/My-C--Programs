/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Multiplication Game.c
 * Author: USER
 *
 * Created on September 14, 2019, 3:15 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
        int x, iNumQues, iRand1, iRand2, iRes;
    srand(time(0));
    printf("\nEnter the number of questions you wanna answer: ");
    scanf("%d", &iNumQues);
    for (x = 0; x < iNumQues; x++) {

        iRand1 = rand() % 10 + 1;
        iRand2 = rand() % 10 + 1;
        
        printf("\nWhat is %d X %d ?\n", iRand1, iRand2);
        printf("Your Answer: ");
        scanf("%d",&iRes );
        
        if (iRes == iRand1 * iRand2){
            printf("\nBravo!!!");
        }else{
            printf("\nScum! You Failed!");
        }
    }

    return (EXIT_SUCCESS);
}

