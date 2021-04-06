/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   The Counter Itself.c
 * Author: USER
 *
 * Created on October 11, 2019, 3:44 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int blank_cnt = 0, c, digit_cnt = 0, letter_cnt = 0, nl_cnt = 0, other_cnt = 0;
    char stop = 'stop';
    
    while ((c = getchar()) != stop)
        if (c == ' ')
            ++blank_cnt;
        else if (c >= '0' && c <= '9')
            ++digit_cnt;
        else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            ++letter_cnt;
        else if (c == '\n')
            ++nl_cnt;
        else ++other_cnt;

    printf("%10s\t%10s\t%10s\t%10s\t%10s\t%10s\n", "blanks", "digits", "letters", "lines", "others", "total");
    printf("%10d\t%10d\t%10d\t%10d\t%10d\t%10d\n\n", blank_cnt, digit_cnt, letter_cnt, nl_cnt, other_cnt, blank_cnt + digit_cnt + letter_cnt + nl_cnt + other_cnt);


    return (EXIT_SUCCESS);
}
