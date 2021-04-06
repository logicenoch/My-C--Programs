/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Header.h"

month prev_month(month n) {
    int Month_Total = 12;
    month previous_month;
    char *store;
    switch (n) {
        case jan:
            previous_month = Month_Total;
            break;
        case feb:
            previous_month = feb - 1;
            break;
        case mar:
            previous_month = mar - 1;
            break;
        case april:
            previous_month = april - 1;
            break;
        case may:
            previous_month = may - 1;
            break;
        case jun:
            previous_month = jun - 1;
            break;
        case jul:
            previous_month = jul - 1;
            break;
        case aug:
            previous_month = aug - 1;
            break;
        case sept:
            previous_month = sept - 1;
        case oct:
            previous_month = oct - 1;
            break;
        case nov:
            previous_month = nov - 1;
            break;
        case dec:
            previous_month = dec - 1;
            break;

    }
    return previous_month;
}