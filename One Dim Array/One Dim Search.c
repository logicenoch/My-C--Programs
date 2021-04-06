/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   One Dim Search.c
 * Author: SiMpLy EnOcH
 *
 * Created on September 24, 2019, 9:28 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x;
    int iFound = -1;
    int iValue;
    int iArray [5];
    for (x = 0; x < 5; x++)
        iArray[x] = (x + x);

    printf("Enter The Value To Search For: ");
    scanf("%d", &iValue);

    for (x = 0; x < 5; x++) {
        if (iArray[x] == iValue) {
            iFound = x;
            break;
        }
    }
    if (iValue > -1) {
        printf("I found your search value in element %d\n", iFound);
    } else {
        printf("\nSorry your search value was not found\n");
    }
}

