/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NDay Function.c
 * Author: USER
 *
 * Created on February 1, 2020, 10:22 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <assert.h>

enum day {
    sunday, monday, tuesday, wednesday, thursday, friday, saturday
};
typedef enum day day;

day find_next_day(day d) {
    day next_day;

    switch (d) {
        case sunday:
            next_day = monday;
            break;
        case monday:
            next_day = tuesday;
            break;
        case tuesday:
            next_day = wednesday;
            break;
        case wednesday:
            next_day = thursday;
            break;
        case thursday:
            next_day = friday;
            break;
        case friday:
            next_day = saturday;
            break;
        case saturday:
            next_day = sunday;
            break;
    }
    return next_day;
}

day find_next_day2(day d) {
    assert((int) d >= 0 && (int) d < 7);
    return ((day) (((int) d + 1) % 7));
}

int main(int argc, char** argv) {

    printf("%d", find_next_day(monday));
    return (EXIT_SUCCESS);
}

