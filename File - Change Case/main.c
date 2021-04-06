/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Logicx
 *
 * Created on October 13, 2020, 5:51 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <fcntl.h>  //Contains O_RDONLY = Open for read only.
#include <unistd.h> //Contains open() and read()

#define BUFSIZE 1024
/*
 *
 */
int main(int argc, char **argv)
{
    char mybuf[BUFSIZE], *p;
    int in_fd, out_fd, n; //in_fd = infile descriptor,out_fd = outfile descriptor.

    in_fd = open(argv[1], O_RDONLY); //first arg = filename,2nd arg = file mode|The function returns a file
                                     //descriptor otherwise -1 is returned.

    out_fd = open(argv[2], O_WRONLY | O_EXCL | O_CREAT, 0600); //O_EXCL = The file is to be open exclusively (It's an error if the file
                                                               //already exists), and the file is to be created if it does not exist.
                                                               //O_EXCL works with only O_CREAT. if the file is created the third arg.
                                                               //sets the file permissions otherwise the arg. has no effect.

    while ((n = read(in_fd, mybuf, BUFSIZE)) > 0) //read() returns the no of character read. A max of BUFSIZE xters are read from the
                                                  //stream associated with in_fd and put into mybuf. While loop will continue to execute
                                                  //as long as read() is able to get characters from the stream.
    {
        for (p = mybuf; p - mybuf < n; ++p)
            if (islower(*p))
                *p = toupper(*p);
            else if (isupper(*p))
                *p = tolower(*p);
        write(out_fd, mybuf, n); //n xters in mybuf are written to the stream indicated by out_fd
    }
    close(in_fd);
    close(out_fd);
    return (EXIT_SUCCESS);
}