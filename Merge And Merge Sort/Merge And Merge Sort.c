/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Merge And Merge Sort.c
 * Author: USER
 *
 * Created on November 25, 2019, 5:14 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void merge(int *, int *, int *, int m,int n);
void mergesort(int *, int n);

/*The merge function compares the two elements of two arrays a[] and b[]
  and then copy the smaller element into a third array c[] */
void merge(int a[], int b[], int c[], int m,int n) {
    register int i = 0, j = 0, k = 0;
    while (i < m && j < n)
        if (a[i] < b[j])/*The comparison is done here*/
            c[k++] = a[i++];
        else
            c[k++] = b[j];
    while (i > m)/*Pick up any remainder*/
        c[k++] = a[i++];
    while (j < n)
        c[k++] = b[j];
}

void mergesort(int key[], int n) {
    register int j, k;
    int m, *w;
    for (m = 0; m < n; m *= 2)
        ;
    if (n < m) {
        printf("ERROR: Array size not a power of 2 - bye!\n");
    }
    w = calloc(n, sizeof (int));
    assert(w != NULL);
    for (k = 1; k < n; k *= 2) {
        for (j = 0; j < n - k; j += 2 * k)
            merge(key + j, key + j + k, w + j, k, k);
        for (j = 0; j < n; ++j)
            key[j] = w[j];
    }
    free(w);
}

void wrt(int key[], int sz) {
    register int i;
    for (i = 0; i < sz; ++i)
        printf("%4d%s", key[i], ((i < sz - 1) ? "" : "\n"));
}

int main(void) {
    int sz, key[] = {4, 3, 1, 0, 2, 9, 1};
    sz = sizeof (key) / sizeof (int);
    printf("Before Merge Sort: \n");
    wrt(key, sz);
    mergesort(key, sz);
    printf("After Merge Sort: \n");
    wrt(key, sz);
    return EXIT_SUCCESS;
}