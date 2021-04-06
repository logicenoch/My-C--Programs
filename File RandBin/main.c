/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 *
 * Created on October 12, 2020, 11:43 AM
 */

#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000

/*
 *
 */
int main(int argc, char **argv)
{
    int numbers[ARSIZE];
    int value;
    const char *file = "numbers.dat";
    int i;
    long pos;
    FILE *iofile;
    srand(time(NULL));

    for (i = 0; i < ARSIZE; i++)
        numbers[i] = rand()%1000;

    if ((iofile = fopen(file, "wb")) == NULL)
    {
        fprintf(stderr, "Can't open file %s for output.\n", file);
        exit(EXIT_FAILURE);
    }
    //Write array into binary file format
    fwrite(numbers, sizeof(int), ARSIZE, iofile);
    fclose(iofile);
    if ((iofile = fopen(file, "rb")) == NULL)
    {
        fprintf(stderr, "Can't open file %s for output.\n", file);
        exit(EXIT_FAILURE);
    }
    //Read selected items from file.
    printf("Enter an index in the range 0 - %d.\n", ARSIZE - 1);
    while (scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE)
    {
        pos = (long)i * sizeof(int);        //Calculate offset.
        fseek(iofile, pos, SEEK_SET);          //go there.
        fread(&value, sizeof(int), 1, iofile); //get it.
        printf("The value there is %d.\n", value);
        printf("Next index(Out of range to quit):\n");
    }
    fclose(iofile);
    puts("bye!\n");
    return (EXIT_SUCCESS);
}
