/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.8
 */

#include "palindrome.h"

int bigChecker(char character) {
    if (character >= 'A' && character <= 'Z')
        return 1;
    else
        return 0;
}

int smallChecker(char character) {
    if (character >= 'a' && character <= 'z')
        return 1;
    else
        return 0;
}

char * bigString(char *small, int n) {
    int i;
    char *big;
    big = calloc(n, sizeof (char));
    for (i = 0; i < n - 1; i++) {
        if (bigChecker(small[i]) == 1 || small[i] == ' ')
            big[i] = small[i];
        else
            big[i] = small[i] - 32;
    }
    printf("To Upper case: %s\n", big);
    return big;

}