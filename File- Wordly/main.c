/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 * This program adds words to a file until "#" is encountered.
 *
 * Created on October 11, 2020, 11:21 AM
 */

#include <stdio.h>
#include <stdlib.h>
typedef char *string;
/*
 *
 */
int main(int argc, char **argv)
{
    FILE *fp;
    string words;
    //Checks if the valid!
    if ((fp = fopen("wordly.txt", "a+")) == NULL)
    {
        fprintf(stderr, "Can't Open file \"Wordly.txt\"");
        exit(EXIT_FAILURE);
    }
    puts("Enter your desired words");
    puts("Enter # at the to terminate writing\n");
    //Write words to file.
    while (fscanf(stdin, "%40s", words) == 1 && (words[0] != '#'))
        fprintf(fp, "%s\n", words);

    puts("File Contents: \n");
    rewind(fp); //Goes to the beginning of the file.
    //Prints out the file.
    while ((fscanf(fp, "%s", words)) == 1)
        puts(words);
    puts("Done\n");
    //Returns an error message if the file fails to close.
    if (fclose(fp) != 0)
        fprintf(stderr, "Error Closing file!\n");
    return (EXIT_SUCCESS);
}
