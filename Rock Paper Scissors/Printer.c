/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "R_P_S.h"

void prn_final_status(int win_cnt, int lose_cnt) {
    if (win_cnt > lose_cnt)
        printf("CONGRATULATIONS - You won!\n\n");
    else if (win_cnt == lose_cnt)
        printf("A DRAW - You tied!\n\n");
    else
        printf("SORRY - You lost!\n\n");

}

void prn_game_status(int win_cnt, int lose_cnt, int tie_cnt) {
    printf("\nGAME STATUS\n");
    printf("Win:  %d\n", win_cnt);
    printf("Lose: %d\n", lose_cnt);
    printf("Tie:  %d\n", tie_cnt);
    printf("Total: %d\n\n", win_cnt + lose_cnt + tie_cnt);
}

void prn_help(void) {
    printf("\n%s\n",
            "The following characters can be used for inputL\n"
            "p for paper\n"
            "r for rock\n"
            "s for scissors\n"
            "g for printing the game status\n"
            "h help, print this list\n"
            "i reprint the instructions\n"
            "q quit this game\n");
}

void prn_instructions(void) {
    printf("\n%s\n",
            "PAPER, ROCK, SCISSORS:\n"
            "In this game p is \"paper,\" r is for \"rock,\" and"
            "s is for \"scissors.\"\n"
            "Both the player and the machine\n"
            "will choose on of p,r,s."
            "If the two choices are the same,\n"
            "then the game is a tie. Otherwise:\n"
            "\"paper covers the rock\" (a win for the paper)\n"
            "\"rock breaks the scissors\" (a win for the rock)\n"
            "\"scissors cut the paper\" (a win for the scissors).\n"
            "\n"
            "There are other allowable inputs:\n"
            "g for game status (the number of wins so far),\n"
            "h for help,\n"
            "i for instructions (reprint these instructions),\n"
            "q for quit (to quit the game).\n"
            "\n"
            "This game is played repeatedly until q is entered\n"
            "\n"
            "\t Good luck!\n");

}