/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "String Of Int Pack.h"

/*Pack all the integers in the string to an int*/

int convert(char *s) {
    char *p;
    int a = 0; /*turn all bits off*/
    for (p = s; *p != '\0'; ++p) {
        a <<= 4;
        switch (*p) {
            case '1':
                a |= 1;
                break;
            case '2':
                a |= 2;
                break;
            case '3':
                a |= 3;
                break;
            case '4':
                a |= 4;
                break;
            case '5':
                a |= 5;
                break;
            case '6':
                a |= 6;
                break;
            case '7':
                a |= 7;
                break;
            case '8':
                a |= 8;
                break;
            case '9':
                a |= 9;
                break;
            default:
                a |= 0;
                break;
        }
    }
    return a;
}
