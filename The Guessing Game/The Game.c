/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   The Game.c
 * Author: BlaQ Tesla
 *
 * Created on September 5, 2019, 8:03 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * 
 */
int main(void) {
    char iRes = '\0';
    int iRand = 0;
    srand(time(0));
    iRand = (rand() % 10) + 1;
    printf("%d", iRand);
    printf("\n\t\"GUESS\" THE GAME.\n");

    printf("Enter Your Guess (1-10): ");
    scanf("%c", &iRes);

    if (isdigit(iRes) == 1) {
        if (iRes == iRand) {
            printf("Your Guess is right!");
        } else {
            printf("You Failed!");
        }
    }
    if (isdigit(iRes) == 0) {
        
        printf("\nPlease Enter An Integer!");
        
    }
}
