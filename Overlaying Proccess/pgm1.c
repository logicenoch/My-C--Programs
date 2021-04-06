/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    printf("%s: ", argv[0]);
    for (size_t i = 0; i < argc; i++)
    {
        printf("%s ", argv[i]);
    }
    putchar('\n');
}