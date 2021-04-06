/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "R_P_S.h"

p_r_s selection_by_machine(void) {
    return ((p_r_s) (rand() % 3));
}

p_r_s selection_by_player(void) {
    char c;
    p_r_s player_choice;
    printf("Input p, r or s: ");
    while (isspace(c = getchar()))
        ;
    switch (c) {
        case 'p':
            player_choice = paper;
            break;
        case 'r':
            player_choice = rock;
            break;
        case 's':
            player_choice = scissors;
            break;
        case 'g':
            player_choice = game;
            break;
        case 'i':
            player_choice = instructions;
            break;
        case 'q':
            player_choice = quit;
            break;
        default:
            player_choice = help;
            break;
    }
    return player_choice;
}