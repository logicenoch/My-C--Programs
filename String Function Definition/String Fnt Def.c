/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   String Fnt Def.c
 * Author: USER
 *
 * Created on November 25, 2019, 9:25 PM
 */

#include <stdio.h>
#include <stdlib.h>

size_t strlen(const char *s);
char *strcpy(char *, register const char*);

int main(void) {
    char *s1 = "Who the hell are you", *s2 = "Like Mancho, Randy";
    printf("%zd\n", strlen(s1));
    printf("%s", strcpy(s1, s2));
}

size_t strlen(const char *s) {
    size_t n;

    for (n = 0; *s != '\0'; s++)/*The loop terminates once '\0' is encountered*/
        n++;
    return n;
}

char *strcpy(char *s1, register const char *s2) {
    register char *p = s1; /*The pointer p is assigned to the pointer s1 in other
                           *  words p contains same memory address as s1*/
    while (*p++ = *s2++)
        ;
    return s1;
}


