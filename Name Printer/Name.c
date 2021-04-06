/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Name.c
 * Author: SiMpLy EnOcH
 *
 * Created on September 27, 2019, 2:41 AM
 */

#include <stdio.h>
#include <stdlib.h>
#define M 5

int main(int argc, char** argv) {
    char cName[5][12] = {'\0'};
    int i;
    int iActive;

    for (i = 0; i < M; i++) {
        printf("Enter The Names You Wanna Register: ");
        scanf("%s", &cName[i]);

        printf("1. Print Another Name.");
        printf("\n2. Register Another Name. ");
        printf("\nSelect Activity: ");
        scanf("%d", &iActive);

        switch (iActive) {
            case 1:
                for (i = 0; i < M; i++) {
                    printf("\t Name(s) Entered So Far.");
                    printf("\n1. %s.\n", cName[0]);
                    printf("\n2. %s.\n", cName[1]);
                    printf("\n3. %s.\n", cName[2]);
                    printf("\n4. %s.\n", cName[3]);
                    printf("\n5. %s.\n", cName[4]);
                    return EXIT_SUCCESS;
                }
            case 2:
                continue;
        }
    }
}

