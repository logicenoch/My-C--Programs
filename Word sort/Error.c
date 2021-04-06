/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "WordSort Header.h"

void error_exit_calloc_failed(void) {
    printf("ERROR: The Call To Calloc Failed\n"
            "Allocate The Requested Memory - Bye!.");
    exit(1);
}

void error_exit_too_many_words(void) {
    printf("ERROR: You Have Exceeded The Number Of Words To Input\n"
            "At Most %d Words Can Be Sorted-Bye!\n", N);
    exit(1);
}

void error_exit_words_too_long(void) {
    printf("%s%d%s\n", "A Word With More Than", MAXCHARACTER_PER_WORD, "Characters Was Found-Bye!");
    exit(1);
}