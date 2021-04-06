/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BRACE .c
 * Author: USER
 *
 * Created on October 17, 2019, 9:08 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    printf("\t\tBRACES\n\n");

    int left_cnt = 0, right_cnt = 0, left_parenthesis = 0, right_parenthesis = 0;
    char c, stop = '@';

    printf("\tPASTE YOUR CODE BELOW\n");
    while ((c = getchar()) != stop) {
        if (c == '{')
            right_cnt++;
        else if (c == '}')
            left_cnt++;
        if (c == '(')
            left_parenthesis++;
        if (c == ')')
            right_parenthesis++;
    }

    if (right_cnt == left_cnt && left_parenthesis == right_parenthesis)
        printf("Response: YOUR BRACES AND PARANTHESES ARE INTACT!!!\nTEST PASSED BRAVO!");

    if (right_cnt > left_cnt) {
        printf("\nERROR: %d Left Brace(s) Missing:\a", right_cnt - left_cnt);
        for (int i = 0; i < right_cnt - left_cnt; i++)
            putchar('}');
    }
    if (left_cnt > right_cnt) {
        printf("\nERROR: %d Right Brace(s) Missing:\a", left_cnt - right_cnt);
        for (int i = 0; i < left_cnt - right_cnt; i++)
            putchar('{');
    }
    if (left_parenthesis > right_parenthesis) {
        printf("\nERROR: %d Left Parenthesis Missing:\a", left_parenthesis - right_parenthesis);
        for (int i = 0; i < left_parenthesis - right_parenthesis; i++)
            putchar('(');
    }
    if (right_parenthesis > left_parenthesis) {
        printf("\nERROR: %d Left Parenthesis Missing:\a", right_parenthesis - left_parenthesis);
        for (int i = 0; i < right_parenthesis - left_parenthesis; i++)
            putchar(')');
    }
    return (EXIT_SUCCESS);
}

