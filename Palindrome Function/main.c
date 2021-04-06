/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: USER
 *
 * Created on December 22, 2019, 11:22 AM 
 */

#include "palindrome.h"

int main(void) {

    char *getString;
    getString = calloc(100, sizeof (char));
    printf("Enter Your String Here: ");
    scanf("%s", getString); //Gets the string from the user.
    int n = strlen(getString) + 1;
    char *StringToUpper = bigString(getString, n);
    char *StringNoSpace = deleteSpace(StringToUpper, n);

    if (isPalindrome(StringNoSpace) == 1)//A comparison is being done here.
        printf("RESPONSE: The String Is A Palindrome.");
    else
        printf("RESPONSE: The String Is Not A Palindrome.");

}
