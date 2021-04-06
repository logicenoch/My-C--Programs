/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Case.c
 * Author: USER
 *
 * Created on August 30, 2019, 4:55 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(void) {
    int iRandomNum = 0;
    int iResponse = 0;
    srand(time(0));
    iRandomNum = (rand() % 10) + 1;

    printf("\nGuess a number between 1 and 10: ");
    scanf("%d", &iResponse);

    if (iResponse == iRandomNum)
        printf("\nYou guessed right\n");
    else {
        printf("\nSorry, you guessed wrong\n");
        printf("The correct guess was %d\n", iRandomNum);

        return (EXIT_SUCCESS);
    }
}
