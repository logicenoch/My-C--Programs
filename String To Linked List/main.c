/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Logic
 *
 * Created on August 5, 2020, 5:26 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

typedef char DATA;
typedef char *string;
typedef struct linked_list
{
    DATA d;
    struct linked_list *next;
} ELEMENT;

typedef ELEMENT *LINK;
/*
 * 
 */
//Creating A Linked List Using Recursion.
LINK string_to_list(char string[])
{
    LINK head;
    if (string[0] == '\0') //Terminates the linked list with a NULL assignment.
        return NULL;
    else
    {
        head = malloc(sizeof(ELEMENT));          //Head is now pointing to the storage allocated.
        head->d = string[0];                     //Inserts the character to the linked list.
        head->next = string_to_list(string + 1); //string+1 gives the remainder of the string which is passed to the function recursively.
        return head;
    }
}

//Creates linked list using iteration.
LINK string_2_list(char string[])
{
    LINK head = NULL, tail;
    int i;
    if (string[0] != '\0')
    {
        //creates the first elements.
        head = malloc(sizeof(ELEMENT));
        head->d = string[0];
        head = tail;
        //Creates the rest of the elements.
        for (i = 1; string[i] != '\0'; ++i)
        {
            tail->next = malloc(sizeof(ELEMENT));
            tail = tail->next; //Advances tail to new element.
            tail->d = string[i];
        }
        tail->next = NULL; //End of the list.
    }
    return head;
}

//Counts the number of elements in a linked list Recursively.
int count(LINK head)
{
    if (head == NULL)
        return 0;
    else
        return (1 + count(head->next));
}
//Counts the number of elements in a linked list iteratively.
int count_it(LINK head)
{
    int cnt = 0;
    for (; head != NULL; head = head->next)
        cnt++;
    return cnt;
}

//Prints the content of the linked list recursively.
void print_list(LINK head)
{
    if (head == NULL)
        printf("NULL\n");
    else
    {
        printf("%c --> ", head->d);
        print_list(head->next);
    }
}

//Concatenates two linked list together.
void concatenate(LINK a, LINK b)
{
    assert(a != NULL);
    if (a->next == NULL) //Looks for the end of the linked list in other for concatenation to occur.
        a->next = b;     //Concatenation occurs here.
    else
        concatenate(a->next, b);
}

//Generic recursion function.
void generic_recursion(LINK head)
{
    if (head == NULL)
    {
        //do the base case.
    }
    else
    {
        //do the general case and recur with
        generic_recursion(head->next);
    }
}

/*Inserts an element in the linked list.*/
void insert(LINK p1, LINK p2, LINK q)
{
    assert(p1->next == p2);
    p1->next = q; //Inserts the element.
    q->next = p2;
}

/*Deleting an element from a linked list is quite simple: Just cause
the member "next" of the predecessor of the element to point the address 
of the targetted element.*/

/*Deletes a linked list as a whole*/
void delete (LINK head)
{
    if (head != NULL)
    {
        delete (head->next);
        free(head); //Releases storage.
    }
}
int main(int argc, char **argv)
{
    string name = "OkekeEnochChibuzo", nama = "logicCounts";
    LINK linked_list = string_to_list(name), linked_list2 = string_to_list(nama);
    concatenate(linked_list2, linked_list);
    printf("Linked List contains %d elements\n", count(linked_list2));
    print_list(linked_list2);
    print_list(linked_list);
    delete (linked_list);

    return (EXIT_SUCCESS);
}
