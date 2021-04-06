/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   P_Lima.c
 * Author: Okeke Enoch Chibuzo
 *
 * Created on December 7, 2019, 9:37 AM
 */

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <math.h>
#define class_size 1

double Average(double *, double *);
void student_name(void);
void student_scores(void);
void wrt_Register(void);
void Admission_Status(void);

int S_N = 0, i;
char *First_Name[class_size];
char *Last_Name[class_size];
char *Middle_Name[class_size];
double *Jamb_Score, *Post_Utme;

double Average(double *Jamb_Score, double *Post_Utme) {

    double Average_Score;

    for (int i = 0; i < class_size; i++) {
        Average_Score[i] = (Post_Utme[i] * 4 + Jamb_Score[i]) / 2;
        return Average_Score[i];
    }

}

void student_name(void) {

    Middle_Name[i] = calloc(class_size, sizeof (char));
    assert(Middle_Name[i] != NULL);

    Last_Name[i] = calloc(class_size, sizeof (char));
    assert(Last_Name[i] != NULL);

    First_Name[i] = calloc(class_size, sizeof (char));
    assert(First_Name[i] != NULL);

    scanf("%s %s %s", &First_Name[i], &Middle_Name[i], &Last_Name[i]);
}

void student_scores(void) {

    printf("Jamb Score: ");
    scanf("%f", Jamb_Score + i);

    printf("\n Post UTME: ");
    scanf("%f", Post_Utme + i);

}

void wrt_Register(void) {
    printf("\n\n\tS\\N\tNAME   \tUTME \tPOST-UTME \t AVERAGE\t    ADMISSION STATUS");
    for (i = 0; i < class_size; i++) {
        printf("\n\t%s %s %s \t%f \t%f", First_Name[i], Middle_Name[i], Last_Name[i], Jamb_Score[i], Post_Utme[i]);
    }
}

int main() {
    printf("\t\t::::::::::::::::::::::::::::\n");
    printf("\t\t::::ADMISSION PROCCESSOR::::\n");
    printf("\t   ::::NNAMDI AZIKIWE UNIVERSITY AWKA::::\n");
    printf("\t\t::::::::::::::::::::::::::::\n\n\n");

    for (i = 0; i < class_size; i++) {
        S_N++;

        printf("\n%d. Full Name: ", S_N);
        student_name();

        printf("\n\nScore:\n ");
        student_scores();
    }
    for (i = 0; i < class_size; i++)
        printf("\n%s %s %s \t%f \t%f \t%f", First_Name + i, Middle_Name + i, Last_Name + i, Jamb_Score[i], Post_Utme[i], Average(Jamb_Score[i], Post_Utme[i]));

    return 0;
}

