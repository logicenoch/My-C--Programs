/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TriviaDGame.c
 * Author: USER
 *
 * Created on September 23, 2019, 10:29 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int mathQuestion(void);
int physicsQuestion(void);
void pause(int);
int iResponse = 0;
int correctAns = 0;
int incorrectAns = 0;

int main(int argc, char** argv) {

    do {

        system("clear");

        printf("\tTHE SCIENCE TRIVIA.\n");

        printf("Select Game To Play: ");
        printf("\n1.Mathematics.");
        printf("\n2.Physics.");
        printf("\n3. Quit.\n");

        printf("Select Game: ");
        scanf("%d", &iResponse);

        switch (iResponse) {
            case 1:
                if (mathQuestion() == 4) {
                    printf("\nCorrect Answer!\n");
                    correctAns++;
                } else {
                    printf("Incorrect Answer!\n");
                    incorrectAns++;
                }
                pause(2);
                break;

            case 2:
                if (physicsQuestion() == 2) {
                    printf("\nCorrect Answer!\n");
                    correctAns++;
                } else {
                    printf("\nIncorrect Answer!\n");
                    incorrectAns++;
                }
                pause(2);
                break;

            case 3:
                printf("You answered %d question(s) correctly.", correctAns);
                printf("\nYou failed %d question(s).\n", incorrectAns);
                pause(3);
                return (EXIT_SUCCESS);
        }

    } while (iResponse >= 1 || iResponse <= 2);
}

int mathQuestion(void) {
    int iAnswer = 0;

    system("clear");

    printf("Math Question:");
    printf(" Choose the correct set of odd numbers.\n");
    printf("1. 1,2,3,4,5,6,7.\n");
    printf("2. 0,5,3,7,9,5,2.\n");
    printf("3. 1,3,5,7,9,11,14.\n");
    printf("4. 1,3,5,7,9,11,13.\n");

    printf("Select Answer: ");
    scanf("%d", &iAnswer);
    return iAnswer;
}

int physicsQuestion() {
    int iAnswer = 0;

    system("clear");

    printf("Physics Question:");
    printf(" Which of the relation is used to calculate the EMF of a cell?\n");
    printf("1. V = Ir\n");
    printf("2. E=I(R+r)\n");
    printf("3. E=I(2R)\n");
    printf("4. E=I(2r)\n");

    printf("Select Answer: ");
    scanf("%d", &iAnswer);
    return iAnswer;
}

void pause(int inum) {
    int iCurrentTime = 0;
    int iElapsedTime = 0;
    iCurrentTime = time(NULL);

    do {
        iElapsedTime = time(NULL);
    } while ((iElapsedTime - iCurrentTime) < inum);
}
