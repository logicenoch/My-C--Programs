/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Bubble_Eff.h"

void AscendbubbleSort(int a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; ++i)
        for (j = n - 1; j > i; --j)
            if (a[j - 1] > a[j])
                swap(&a[j - 1], &a[j]);

}

void DescendbubbleSort(int a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; ++i)
        for (j = n - 1; j > i; --j)
            if (a[j - 1] < a[j])
                swap(&a[j - 1], &a[j]);
}