/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "WordSort Header.h"

void sort_words(char* w[], int n) {
    register int i, j;
    for (i = 0; i < n; ++i)
        for (j = i + 1; j < n; ++j)
            if (strcmp(w[i], w[j]) > 0)
                swap(&w[i], &w[j]);

}
