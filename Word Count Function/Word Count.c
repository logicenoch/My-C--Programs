/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Word Count.c
 * Author: Okeke Enoch Chibuzo
 *
 * Created on November 25, 2019, 6:40 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
int word_cnt(const char *);

int main(void) {
    char *w = "Toss the coin";
    printf("The Above Literal(s) Contain(s) About %d word(s)", word_cnt(w));
}

int word_cnt(const char *s) {
    int cnt = 0;
    while (*s != '\0') { //If the string only contains end-of-sentinel character terminate the loop.
        while (isspace(*s))//skips  white space
            ++s;
        if (*s != '\0') {//Found A Word
            ++cnt;
            while (!isspace(*s) && *s != '\0') //Skip The Word
                ++s;
        }
    }
    return cnt;
}
