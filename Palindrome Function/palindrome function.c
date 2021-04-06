/* To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.*/
#include "palindrome.h"
int isPalindrome(char *inputString) {

    int len = strlen(inputString); //abba
    char temp[len];
    temp[len] = '\0'; //This will contain the reversed string.
    int i;

    for (i = 0; i < len; i++)
        temp[i] = inputString[len - 1 - i]; //The reverse is done here.
    
    printf("The reversed string: %s\n",temp);

    if (strcmp(temp, inputString) == 0)//The two arrays are compared here.
        return 1;
    else
        return 0;

}