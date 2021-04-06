/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: USER
 *
 * Created on March 2, 2020, 10:33 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int main(int argc, char** argv) {
    char string[] = "4563";
    printf("Intial String: %s\n",string);
    int n = convert(string);
    printf("%s Packed in %d\n",string, convert(string));
    printf("%d in Binary: ",convert(string));
    bit_print(n);
    printf("Unpacked Contains: ");
    for (int i = 3; i >= 0; --i)
        printf("%c", convert_2_char(17763, i));
    return (EXIT_SUCCESS);
}

