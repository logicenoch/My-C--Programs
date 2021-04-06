/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    int i, sum = 0, value;

    for (size_t i = 0; i < argc; i++)
    {
        if (sscanf(argv[i], "%d", &value) == 1)
            sum += value;
    }
    printf("%s: sum of command line args = %d", argv[0], sum);
    return EXIT_SUCCESS;
}