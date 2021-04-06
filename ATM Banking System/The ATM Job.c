/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: SiMpLy EnOcH
 *
 * Created on September 7, 2019, 8:49 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * 
 */
int main(void) {
    int iPin = 0;
    int iBank = 0;
    int iAccno = 0;
    int iActivity = 0;
    int wActivity = 0;
    float fAmount = 0;
    char cPolar = '\0',
            Y = '\0',
            y = '\0',
            N = '\0',
            n = '\0';

    printf("\n\t|WELCOME TO TESLA'S ATM TERMINAL|\n");
    printf("\nInsert Debit Card...\n");

    printf("\nReading card...");
    printf("\nReading card...");
    printf("\nReading card...\n");
    printf("\nCard accepted!\n");

    printf("\nEnter Card Pin: ");
    scanf("%d", &iPin);
    system("clear");

    do {
        printf("\nIncorrect!\n ");
        printf("\nEnter The Correct Card Pin: ");
        scanf("%d", &iPin);
        system("clear");
    } while (iPin != 5926);
    if (iPin == 5926) {

        printf("\n\t| Welcome Okeke Enoch Chibuzo |\n");

        while (!(iActivity >= 1 && iActivity <= 6)) {
MENU:
            printf("\nACTIVITIES: \n");
            printf("\n\t1.Withdrawal | 2.Transfer      | 3. Check balance");
            printf("\n\t4.Pay bills  | 5.Bank Services | 6. Airtime & Data\n");
            printf("\nSelect Activity: ");
            scanf("%d", &iActivity);
            while (!(iActivity >= 1 || iActivity <= 6)) {
                printf("\nSelect Activity: ");
                scanf("%d", &iActivity);
            }

            switch (iActivity) {

                case 1:

                    printf("\nWithdrawal: \n");
                    printf("\n\t1.N500  |2.N1000  |3.5000");
                    printf("\n\t4.10000 |5.N20000 |6.Others\n");
                    printf("\nSelect Amount: ");
                    scanf("%d", &wActivity);
                    while (!(wActivity >= 1 || wActivity <= 6)) {
                        printf("\nSelect Correct Amount: ");
                        scanf("%d", &wActivity);
                    }

                    switch (wActivity) {
                        case 1:
                            printf("\nPlease wait...");
                            printf("\nYour Request Is Being Processed....\n");
                            printf("\nPlease wait...");
                            printf("\nYour Request Is Being Processed....\n");
                            printf("\nOboy collect your N500 naira, E don come out!\n");
                            printf("Thank You!");
                            break;
                        case 2:
                            printf("\nPlease wait...");
                            printf("\nYour Request Is Being Processed....\n");
                            printf("\nPlease wait...");
                            printf("\nYour Request Is Being Processed....\n");
                            printf("\nOboy collect your N1000 naira, E don come out!\n");
                            printf("Thank You!");
                            break;
                            return 0;
                        case 3:
                            printf("\nPlease wait...");
                            printf("\nYour Request Is Being Processed....\n");
                            printf("\nPlease wait...");
                            printf("\nYour Request Is Being Processed....\n");
                            printf("\nOboy collect your N5000 naira, E don come out!\n");
                            printf("Thank You!");
                            break;
                            return 0;
                        case 4:
                            printf("\nPlease wait...");
                            printf("\nYour Request Is Being Processed....\n");
                            printf("\nPlease wait...");
                            printf("\nYour Request Is Being Processed....\n");
                            printf("\nOboy collect your N10000 naira, E don come out!\n");
                            printf("Thank You!");
                            break;
                            return 0;
                        case 5:
                            printf("\nPlease wait...");
                            printf("\nYour Request Is Being Processed....\n");
                            printf("\nPlease wait...");
                            printf("\nYour Request Is Being Processed....\n");
                            printf("\nOboy collect your N20000 naira, E don come out!\n");
                            printf("Thank You!");
                            break;
                            return 0;
                        case 6:
                            printf("\nEnter Amount: N");
                            scanf("%f", &fAmount);
                            printf("\nPlease wait...");
                            printf("\nYour Request Is Being Processed....\n");
                            printf("\nPlease wait...");
                            printf("\nYour Request Is Being Processed....\n");
                            printf("\nOboy collect your N%.2f naira, E don come out!\n", fAmount);
                            break;
                            return 0;
                        default:
                            printf("\nIncorrect!\n");
                            break;
                            return 0;

                    }
                case 2:
                    printf("\nTransfer: \n");
                    printf(" \n 1. UBA    |2. ZENITH\n");
                    printf(" 3. FBN    |4. ACCESS\n");
                    printf(" 5. ECOBANK|6. STERLING\n");
                    printf(" 7. FCMB   |8. DIAMOND\n");
                    printf(" 9. GTB    |10. FIDELITY\n");
                    printf("\nSelect Bank: ");
                    scanf("%d", &iBank);
                    if (iBank >= 1 || iBank <= 10) {
                        printf("\nEnter Recipient's Account Number: ");
                        scanf("%d", &iAccno);
                        printf("\nEnter Amount: ");
                        scanf("%f", &fAmount);
                        if (fAmount >= 500 || fAmount <= 250000) {
                            printf("You are about to transfer the sum of %.2f naira to %d .", fAmount, iAccno);
                            printf("\nEnter \"Y\" to proceed or \"N\" to cancel: ");
                            scanf("%c", &cPolar);
                            if (cPolar == y || cPolar == Y) {
                                printf("\nTransfer Success!!!");
                                return 0;
                            } else {
                                printf("\nincorrect");
                                return 0;
                            }
                        } else {
                            printf("Transfer Aborted!!!\n");
                            printf("\nAmount not in range (N500 - N250,000)\n");
                            printf("Amount not in range (N500 - N250,000)");
                            return 0;
                        }
                    } else {
                        printf("\nIncorrect selection! Transfer canceled!!!");
                        return 0;
                    }
            }
        }
    } else {
        printf("\nIncorrect pin!\n");
    }
    return 0;
}

