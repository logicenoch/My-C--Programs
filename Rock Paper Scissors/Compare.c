/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "R_P_S.h"

outcome compare(p_r_s player_choice, p_r_s machine_choice) {

    outcome result;
    if (player_choice == machine_choice)
        return tie;
    switch (player_choice) {
        case paper:
            result = (machine_choice == rock) ? win : lose;
            break;
        case rock:
            result = (machine_choice == scissors) ? win : lose;
            break;
        case scissors:
            result = (machine_choice == paper) ? win : lose;
            break;
        default:
            printf("\nPROGRAMMER ERROR: Unexpected choice!\n\n");
            exit(1);
    }
    return result;
}