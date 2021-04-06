/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DigiOracle.c
 * Author: USER
 *
 * Created on August 30, 2019, 6:05 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(void) {
    printf("\n\t|WELCOME TO DIGITAL ORACLE DOMAIN C-VERSION|\n");
    char cResponse = '\0';
    printf("\nOracle: ");
    printf("Hello human! Ask me any question!\n");
    printf("\nYour Question: ");
    scanf("%c", &cResponse);
    int iRandomNum = 0;
    srand(time(0));
    iRandomNum = (rand() % 10) + 1;
    printf("Random Number Value: %d\n\n", iRandomNum);
    switch (iRandomNum) {
        case 1:
            printf("Yes, isn't it obvious?");
            break;
        case 2:
            printf("No, and don't ask again");
            break;
        case 3:
            printf("Yes Sire!");
            break;
        case 4:
            printf("It's a lie sire");
            break;
        case 5:
            printf("What??? I can't her you");
            break;
        case 6:
            printf("Bro you will control money");
            break;
        case 7:
            printf("You're a genuis bro");
            break;
        case 8:
            printf("Nigga you gotta work hard");
            break;
        case 9:
            printf("Success don't just come, you have to strive for it");
            break;
        case 10:
            printf("You will go to hell fire bro");
            break;
        default:
            printf("You think you have problem?");
            printf("My random number");
            printf(" generator is broken.");
    }

    return (0);
}

