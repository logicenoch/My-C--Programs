/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "palindrome.h"

char * deleteSpace(char *String, int n) {
    int i, j, cnt = 0;
    char *withoutSpaces;
    withoutSpaces = calloc(n, sizeof (char));
    for (i = 0, j = 0; i < n - 1 && j < n - 1; i++) {
        if (String[i] == ' ') {
            continue;
        } else
            withoutSpaces[j++] = String[i];
    }
    printf("Space Deleted: %s\n",withoutSpaces);
    return withoutSpaces;
}