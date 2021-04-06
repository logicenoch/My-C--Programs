/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 *
 * Created on October 14, 2020, 1:19 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int main(int argc, char** argv) {

    int c;
    FILE *ifp;
    ifp = popen("ls", "r");
    /*Popen creates a pipe btw the calling environment
    and the system command that's executed. it gives us
    access to all produced by the ls-command*/
    while ((c = getc(ifp)) != EOF) {
        putchar(toupper(c));
    }
    pclose(ifp); /*closes the stream*/
    return (EXIT_SUCCESS);
}

