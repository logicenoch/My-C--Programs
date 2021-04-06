/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BT.c
 * Author: Logic
 *
 * Created on August 28, 2020, 11:42 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
typedef int DATA;

//Defines the nature of the BTREE.
struct node
{
    DATA d;
    struct node *left;
    struct node *right;
};

typedef struct node NODE;
typedef NODE *BTREE;

//creating BTREE.
BTREE new_NODE(void)
{
    return malloc(sizeof(NODE));
}
//Initializes the BTREE NODE
BTREE init_node(DATA d1, BTREE p1, BTREE p2)
{
    BTREE tmp;
    tmp->d = d1;
    tmp->left = p1;
    tmp->right = p2;
    return tmp;
}

//Traverses the BTREE
void inorder(BTREE root)
{
    inorder(root->left);
    printf("%d ", root->d);
    inorder(root->left);
}

void preorder(BTREE root)
{
    printf("%d ", root->d);
    inorder(root->left);
    inorder(root->left);
}

void postorder(BTREE root)
{
    inorder(root->left);
    inorder(root->right);
    printf("%d ", root->d);
} //Traversal functions stop here.

BTREE create_tree(DATA a[], int i, int size)
{
    if (i >= size)
        return NULL;
    else
    {
        return init_node(a[i],
                         create_tree(a, 2 * i + 1, size),  //The array arithemetic or mapping makes the left child and
                         create_tree(a, 2 * i + 2, size)); //the right child of the root a[0] to be a[1] and a[2] respectively.
    }
}

void fill_array(int *a, unsigned sz)
{
    srand(time(NULL));
    a = calloc(sz, sizeof(int));
    for (size_t i = 0; i < sz; i++)
        a[i] = rand() % 100;
}

int main(int argc, char **argv)
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    create_tree(a, 0, 10);
    printf("%d ", a[1]);

    return (EXIT_SUCCESS);
}