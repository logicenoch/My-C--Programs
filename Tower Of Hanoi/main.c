/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: USER
 *
 * Created on October 21, 2019, 12:53 AM
 */

#include "hanoi.h"

int cnt = 0;

int main() {
    register long n;
    n = get_n_from_user();
    assert(n > 0);
    /*
    //Move n disks from tower A to tower C,
    //using tower B as an intermediate tower.
     */
    move(n, 'A', 'B', 'C');
    printf("\n\nIt Takes The Monk %.2f years To Make %10d Moves", (double) cnt / 365, cnt);
    return 0;
}


