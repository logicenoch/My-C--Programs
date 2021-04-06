/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   hanoi.h
 * Author: USER
 *
 * Created on October 21, 2019, 12:55 AM
 */

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

extern int cnt;

int get_n_from_user(void);
void move(register long n, char a, char b, char c);

