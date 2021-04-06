/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "R_P_S.h"

void report_and_tabulate(outcome result, int *wint_cnt_ptr, int *lose_cnt_ptr, int *tie_cnt_ptr) {
    switch (result) {
        case win:
            ++*wint_cnt_ptr;
            printf("%27s You win.\n", "");
            break;
        case lose:
            ++*lose_cnt_ptr;
            printf("%27s You lose.\n", "");
            break;
        case tie:
            ++*tie_cnt_ptr;
            printf("%27s A tie.\n", "");
            break;
        default:
            printf("PROGRAMMER ERROR: Unexpected result!\n\n");
            exit(1);
    }
}