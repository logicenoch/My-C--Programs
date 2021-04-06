/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "WordSort Header.h"

void swap(char **p, char **q) {
    char *temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
