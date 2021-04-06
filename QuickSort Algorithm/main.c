/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/*
 * File:   Test.c
 * Author: SiMpLy_EnOcH
 * Created on September 8, 2019, 9:19 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>
#include <math.h>
#include <limits.h>

#define swap(x,y) {int t; t=x; x=y ; y=t;}
#define order(x,y) if(x>y)swap(x,y)
#define o2(x,y) order(x,y)
#define o3(x,y,z) o2(x,y); o2(x,z); o2(y,z)

typedef enum {
    yes, no
} yes_no;

static yes_no find_pivot(int *left, int *right, int *pivot_ptr);
static int *partition(int *left, int *right, int pivot);

void quicksort(int *left, int *right) {
    int *p, pivot;
    if (find_pivot(left, right, &pivot) == yes) {
        p = partition(left, right, pivot);
        quicksort(left, p - 1);
        quicksort(p, right);
    }
}

static yes_no find_pivot(int *left, int *right, int *pivot_ptr) {
    int a, b, c, *p;

    a = *left;
    b = *(left + (right - left) / 2);
    c = *right;
    o3(a, b, c);
    if (a < b) {
        *pivot_ptr = b;
        return yes;
    }

    if (b < c) {
        *pivot_ptr = c;
        return yes;
    }

    for (p = left + 1; p <= right; ++p)
        if (*p != *left) {
            *pivot_ptr = (*p < *left) ? *left : *p;
            return yes;
        }
    return no;
}

static int *partition(int* left, int* right, int pivot) {
    while (left <= right) {
        while (*left < pivot)
            ++left;
        while (*right >= pivot)
            --right;
        if (left < right) {
            swap(*left, *right);
            ++left;
            --right;
        }
        return left;
    }
}

int main(void) {
    isalpha('A');
    return 0;
}


