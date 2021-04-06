/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "hanoi.h"

int get_n_from_user(void)
{
    int n;

    printf("%s","---\n"
           "TOWERS OF HANOI:\n"
           "\n"
           "There are three towers: A, B, and C.\n"
           "\n"
           "The disks on tower A must be moved to tower c. Only one\n"
           "disk can be moved at a time, and the order on each tower\n"
           "must be preserved at each step. Any of the towers A, B,\n"
           "or C can be used for intermediate placement of a disk.\n"
           "\n"
           "The problem starts with n disks on Tower A.\n"
           "\n"
           "Input n: ");
    if(scanf("%d",&n) != 1 || n< 1)
    {
        printf("\nERROR: Positive integer not found - bye!\n\n");
    }
    printf("\n");
    return n;
}