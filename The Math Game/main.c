/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main Math Game.c
 * Author: SiMpLy TeSlA
 *
 * Created on September 14, 2019, 5:05 PM
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int iActivity = 0;
    int iAnswer = 0;
    int iRandnum1 = 0;
    int iRandnum2 = 0;
    int iNumQues = 0;
    int f = 0, y = 0;
    int iXPoints = 0;
    int x = 0;
    srand(time(0));

    printf("\t WELCOME TO THE ULTIMATE MATH GAME!\n");
    printf("\n1. Multiplication Challenge."
            "\n2. Addition Challenge."
            "\n3. Subtraction Challenge."
            "\n4. Exit.");
    printf("\nChoose Game: ");
    scanf("%d", &iActivity);
    system("clear");
    while (iActivity >= 1 || iActivity <= 4) {
        switch (iActivity) {
            case 1:
                printf("\n\tTHE MULTIPLICATION CHALLENGE");

                printf("\nHow many questions do you want to answer?");
                printf("\nResponse: ");
                scanf("%d", &iNumQues);

                for (x = 0; x < iNumQues; x++) {
                    iRandnum1 = (rand() % 10 + 1);
                    iRandnum2 = (rand() % 10 + 1);
                    printf("\nThe product of %d and %d is ", iRandnum1, iRandnum2);
                    scanf("%d", &iAnswer);

                    if (iAnswer == iRandnum1 * iRandnum2) {
                        printf("Bravo! You made a point!\n");
                        y++;
                    } else {
                        printf("Sorry! You failed.\n");
                        f++;
                    }
                }
                system("clear");
                printf("\t GAME SUMMARY\n");
                printf("\nTotal Question(s) Answered: %d",iNumQues);
                printf("\nYou Answered %d correct question(s).", y);
                printf("\nYou failed %d question(s).", f);
                if (y > f) {
                    printf("\n\t EXCELLENT GAME!");
                } else {
                    printf("\n\tILLITRATE!!! GO \"N\" READ");
                }
                return (EXIT_SUCCESS);

            case 2:
                printf("\tTHE ADDITION CHALLENGE");
                printf("\nHow many questions do you want to answer?");
                printf("\nResponse: ");
                scanf("%d", &iNumQues);

                for (x = 0; x < iNumQues; x++) {
                    iRandnum1 = (rand() % 10 + 1);
                    iRandnum2 = (rand() % 10 + 1);
                    printf("\nThe sum of %d and %d is ", iRandnum1, iRandnum2);
                    scanf("%d", &iAnswer);

                    if (iAnswer == iRandnum1 + iRandnum2) {
                        printf("Bravo! You made a point!\n");
                        y++;
                    } else {
                        printf("Sorry! You failed.\n");
                        f++;
                    }
                }
                system("clear");
                printf("\t GAME SUMMARY\n");
                printf("\nTotal Question(s) Answered: %d",iNumQues);
                printf("\nYou Answered %d correct question(s).", y);
                printf("\nYou failed %d question(s).", f);
                if (y > f) {
                    printf("\n\t EXCELLENT GAME!");
                } else {
                    printf("\n\tILLITRATE!!! GO \"N\" READ");
                }
                return (EXIT_SUCCESS);

            case 3:
                printf("\tTHE SUBTRACTION CHALLENGE");
                printf("\nHow many questions do you want to answer?");
                printf("\nResponse: ");
                scanf("%d", &iNumQues);

                for (x = 0; x < iNumQues; x++) {
                    iRandnum1 = (rand() % 10 + 1);
                    iRandnum2 = (rand() % 10 + 1);
                    printf("\nThe difference of %d and %d is ", iRandnum1, iRandnum2);
                    scanf("%d", &iAnswer);

                    if (iAnswer == iRandnum1 - iRandnum2) {
                        printf("Bravo! You made a point!\n");
                        y++;
                    } else {
                        printf("Sorry! You failed.\n");
                        f++;
                    }
                }
                system("clear");
                printf("\t GAME SUMMARY\n");
                printf("\nTotal Question(s) Answered: %d",iNumQues);
                printf("\nYou Answered %d correct question(s).", y);
                printf("\nYou failed %d question(s).", f);
                if (y > f) {
                    printf("\n\t EXCELLENT GAME!");
                } else {
                    printf("\n\tILLITRATE!!! GO \"N\" READ");
                }
                return (EXIT_SUCCESS);

            case 4:
                printf("\tPROGRAM TERMINATED!");
                return (EXIT_SUCCESS);
        }
    }

    printf("\nYou entered an incorrect option; Program will terminate now.");
    return (EXIT_SUCCESS);
}

