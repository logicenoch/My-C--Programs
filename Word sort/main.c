/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Word Sort.c
 * Author: USER
 *
 * Created on November 27, 2019, 6:24 PM
 */

#include "WordSort Header.h"

int main(int argc, char** argv) {
    char word[MAXCHARACTER_PER_WORD]; /*Work space*/
    char *w[N]; /*an array of pointers*/
    int n; /*number of words to be sorted*/
    int i;

    printf("Make A Sentence Here: ");
    for (i = 0; scanf("%s", word) == 1; ++i) {
        if (i >= N)/*Checks if the number of words has exceeded its limit*/
            error_exit_too_many_words();

        if (strlen(word) >= MAXCHARACTER_PER_WORD)/*Checks if the number of characters per word has exceeded its limit*/
            error_exit_words_too_long();

        w[i] = calloc(strlen(word) + 1, sizeof (char)); /*Allocates memory for an array with n elements*/

        if (w[i] == NULL)/*This checks if the calloc function worked*/
            error_exit_calloc_failed();

        strcpy(w[i], word); /*Copies whatever is in word to the memory with an address w[i] where i=0,1,2...*/

    }

    n = i;
    sort_words(w, n); /*Sorts the word in an array w lexicographically*/
    wrt_words(w, n); /*Prints the words that have sorted lexicographically*/

    return (EXIT_SUCCESS);
}

