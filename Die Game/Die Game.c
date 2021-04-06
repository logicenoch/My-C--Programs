/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Die Game.c
 * Author: SiMpLy EnOcH
 *
 * Created on September 6, 2019, 8:34 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int sum = 0;
    int iDie1 = 0;
    int iDie2 = 0;
    
    srand(time(0));
    iDie1 = (rand() % 6) + 1;
    iDie2 = (rand() % 6) + 1;
    sum = iDie1 + iDie2;
    
    printf("\n\t\"DICE\" THE GAME.\n");
    printf("\nRolling dice...");
    printf("\nRolling dice...");
    printf("\nRolling dice...");
    printf("\nRolling dice...");
    printf("\nRolling dice...\n");
    
    if(sum ==7 || sum==11){
        printf("\nResult: ");
        printf("You have won the game!");
    }else{
        printf("\nResult: ");
        printf("Ouch!, %d is not equal to 7 or 11. Thanks For Playing.\n",sum);
    }

    return (EXIT_SUCCESS);
}

