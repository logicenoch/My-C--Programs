/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 *
 * Created on October 14, 2020, 12:55 AM
 */

#include <ctype.h>
#include <process.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char **argv, char **env)
{
    int choice = 0;

    printf("%s\n%s\n%s",
           "The parent process will be overlaid.",
           "Input 1 or 2: ");

    scanf("%d", &choice);
    putchar('\n');
    if (choice == 1)
        execl("pgm1", "pgm1", "a", "b", "c", 0);
    if (choice == 2)
        execl("pgm2", "pgm2", "1", "2", "3", "go", 0);
    printf("ERROR: You did not input 1 or 2.\n");
    return EXIT_SUCCESS;
}
