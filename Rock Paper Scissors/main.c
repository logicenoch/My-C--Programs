/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: USER
 *
 * Created on February 1, 2020, 10:48 PM
 */

#include "R_P_S.h"

int main(int argc, char** argv) {
    int win_cnt = 0, lose_cnt, tie_cnt = 0;
    outcome result;
    p_r_s player_choice, machine_choice;

    srand(time(NULL));
    prn_instructions();
    while ((player_choice = selection_by_player()) != quit)
        switch (player_choice) {
            case paper:
            case rock:
            case scissors:
                machine_choice = selection_by_machine();
                result = compare(player_choice, machine_choice);
                report_and_tabulate(result, &win_cnt, &lose_cnt, &tie_cnt);
                break;
            case game:
                prn_game_status(win_cnt, lose_cnt, tie_cnt);
                break;
            case instructions:
                prn_instructions();
                break;
            case help:
                prn_help();
                break;
            default:
                printf("\n PROGRAMMER ERROR: Cannot get to here\n\n");
                exit(1);
        }
    prn_game_status(win_cnt, lose_cnt, tie_cnt);
    prn_final_status(win_cnt, lose_cnt);
    return (EXIT_SUCCESS);
}

