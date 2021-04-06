/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "String Of Int Pack.h"
/*Unpack all the integers and returning the char equivalent*/

int Count(int n) {
    int cnt = 0;
    while (n != 0) {
        n /= 10;
        cnt++;
    }
    return cnt;
}

char convert_2_char(int n, int byte_Id) {
    int bit_Id = Count(n), mask = 15;
    char String = '\0';
    int bit = byte_Id * 4;
    mask <<= bit;
    switch ((n & mask) >> bit) {
        case 1:
            String = '1';
            break;
        case 2:
            String = '2';
            break;
        case 3:
            String = '3';
            break;
        case 4:
            String = '4';
            break;
        case 5:
            String = '5';
            break;
        case 6:
            String = '6';
            break;
        case 7:
            String = '7';
            break;
        case 8:
            String = '8';
            break;
        case 9:
            String = '9';
            break;
        case 0:
            String = '0';
            break;
    }
    return String;
}