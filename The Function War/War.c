/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   War.c
 * Author: SiMpLy TeSlA
 *
 * Created on September 23, 2019, 11:32 PM
 */

#include <stdio.h>
#include <stdlib.h>

int Remainder(int, int);
int Larger(int, int);
void ATMmenu(void);
int iResponse = 0;
int num1 = 0, num2 = 0;
void pause(int);
int iCurrent = 0;
int iElapsed = 0;

int main(int argc, char **argv)
{
    do
    {
        system("clear");

        printf("\tTHE FUNCTON WAR");
        printf("\n1. Get A Remainder.");
        printf("\n2. Get The Larger.");
        printf("\n3. Print ATM Menu.");

        printf("\nSelect Activity: ");
        scanf("%d", &iResponse);

        switch (iResponse)
        {
        case 1:
            printf("\tGet A Remainder\n");
            printf("\nEnter First Number: ");
            scanf("%d", &num1);
            printf("Enter Second Number: ");
            scanf("%d", &num2);
            printf("The Remainder is %d\n", Remainder(num1, num2));
            pause(3);
            break;

        case 2:
            printf("\tGet The Larger\n");
            printf("Enter First Number: ");
            scanf("%d", &num1);
            printf("Enter Second Number: ");
            scanf("%d", &num2);
            printf("The Larger Integer is %d\n", Larger(num1, num2));
            pause(3);
            break;
        case 3:
            printf("\n• Display balance");
            printf("\n• Deposit funds");
            printf("\n• Transfer funds");
            printf("\n• Withdraw funds\n");
            pause(6);
            break;
        }
    } while (iResponse >= 1 || iResponse <= 3);
}
int Remainder(int num1, int num2)
{
    return num1 % num2;
}
int Larger(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
void ATMmenu(void)
{
}
void pause(int inum)
{
    int iCurrent = time(NULL);
    do
    {
        iElapsed = time(NULL);

    } while ((iElapsed - iCurrent) < inum);
}
