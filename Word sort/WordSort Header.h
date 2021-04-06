/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   WordSort Header.h
 * Author: Simply Enoch
 *
 * Created on November 27, 2019, 6:24 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

#define MAXCHARACTER_PER_WORD 50
#define N 300 /* array size of w[] */

void error_exit_calloc_failed(void);
void error_exit_too_many_words(void);
void error_exit_words_too_long(void);
void sort_words(char *w[], int n);
void swap(char **p, char **q);
void wrt_words(char *w[], int n);

