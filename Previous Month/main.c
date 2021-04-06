/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: USER
 *
 * Created on March 2, 2020, 12:12 PM
 */
#include "Header.h"

int main(int argc, char** argv) {
    char Months[][12] = {
    {"\0"},
    {"January"},
    {"February"},
    {"March"},
    {"April"},
    {"May"},
    {"June"},
    {"July"},
    {"August"},
    {"September"},
    {"October"},
    {"November"},
    {"December"}
};
    printf("___________________________\n");
    printf("|PREVIOUS MONTH C PROGRAM\n");
    printf("__________________________\n");
    int selection;
    printf("Enter Month: ");
    scanf("%d", &selection);
    printf("Previous Month: %s", Months[prev_month(selection)]);
    return (EXIT_SUCCESS);
}

