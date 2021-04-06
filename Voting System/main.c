/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Program Name: USSD Application(INEC Voting System)
 * Author: Okeke Enoch Chibuzo -> Logic
 * Version: Single File Version.
 * Type: Prototype.
 *
 * Created on April 20, 2020, 11:55 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <ctype.h>
#include <string.h>

void PassCodeDisplay(void);
void WelcomeDisplay(void);
void DateTimeDisplay(void);
int AdminDisplay(void);
void DisplayRegisteredParties(char **, int);
int Voter_Menu_Display(int);
void Display_Winner(char **, int);

void Wrt_Voters(void);

void Statistics(char **, int *, int, int, int, int, int);
void Result_Per_NVotes(char **, int *, int, int);
double Result_Percent(int, int);
int searching_Element(int *, int, int);
int max_value(int *, int);

typedef enum
{
    Register_PP = 1,
    Exit_Program
} AdminMenu;

typedef enum
{
    start_voting = 1,
    Exit_program
} SubMenu;

typedef enum
{
    Voter_Present = 1,
    Voter_Absent,
    Current_Statistics,
    End_Voting_Process
} VoterMenu;

int selection, registered, PassCode;
/*
 * 
 */
void PassCodeDisplay(void)
{
    int PassCode_cnt = 0;
    do
    {
        printf("Administrative PassCode\n");
        printf(" >>"), scanf("%d", &PassCode);
        PassCode_cnt++;        /*Counts the amount of error in PassCode trials*/
        if (PassCode_cnt == 3) /*terminates your program whenever you input three wrong PassCodes*/
        {
            printf(" You Have incorrectly typed your PassCode %d times, Terminating program...\n", PassCode_cnt);
            exit(0);
        }
    } while (PassCode != 9920);
}

void WelcomeDisplay(void)
{

    printf("\t|||||||||||||||||||||||||||||||||||\n");
    printf("\t||INDEPENDENT ELECTORAL COMISSION||\n");
    printf("\t|||||||MOBILE VOTING SYSTEM||||||||\n");
    printf("\t|||||||||||||||||||||||||||||||||||\n");
    putchar('\n');
    printf(" Welcome Administrator,\n ");
}

void DateTimeDisplay(void)
{
    printf("%s\n%s\n", __DATE__, __TIME__);
}

int AdminDisplay(void)
{
    selection = 0;
    printf("ADMINISTRATOR:\n ");
    printf("1. Register Political Parties.\n");
    printf(" 2. Exit Program.\n");
    printf(" >>");
    scanf("%d", &selection);
    return selection;
}

int SubDisplay(void)
{
    printf("ADMINISTRATOR SUBMENU:\n ");
    printf("1. Start Voting.\n");
    printf(" 2. Exit Program.\n");
    printf(" >>");
    scanf("%d", &selection);
    return selection;
}

int Voter_Menu_Display(int VoterID)
{
    selection = 0;
    printf("\tVOTER-ID: 2018-534-00%d\n", VoterID), printf("VOTER MENU:\n ");
    printf("1. Voter Present.\n");
    printf(" 2. Voter Absent.\n");
    printf(" 3. Current Statistics.\n");
    printf(" 4. End Voting Process.\n");
    printf(" >>");
    scanf("%d", &selection);
    return selection;
}

void DisplayRegisteredParties(char *Politcal_PartiesDB[], int NPolitical_Parties)
{
    for (registered = 1; registered <= NPolitical_Parties; registered++)
    {
        printf("%d. %s\n", registered, Politcal_PartiesDB[registered]);
    }
}

double Result_Percent(int Votes, int Voters_Present)
{

    return ((double)Votes / (double)Voters_Present) * 100.0;
}

int max_value(int *array, int array_size)
{
    int i, MAX_VALUE = 0;
    for (i = 1; i <= array_size; i++)
        if (array[i] > MAX_VALUE)
            MAX_VALUE = array[i];

    return MAX_VALUE;
}

int searching_Element(int *array, int array_size, int MAX_VALUE)
{
    int i, index = 0;
    for (i = 1; i <= array_size; i++)
    {
        if (array[i] == MAX_VALUE)
        {
            index = i;
            break;
        }
    }
    if (index > -1)
        return index;
}

void Result_Per_NVotes(char **Politicl_PartiesDB, int *VotesDB, int NPolitical_Parties, int Cnt_Voters_Present)
{
    int results;
    printf("\t\t\t    <<|RESLUTS|>>\n");
    printf("Political Parties\t\tVotes\t\t  Percentage Votes\n");
    for (results = 1; results <= NPolitical_Parties; results++)
    {
        printf("      %s\t\t\t %d\t\t\t%.2f%c%\n", Politicl_PartiesDB[results], VotesDB[results], Result_Percent(VotesDB[results], Cnt_Voters_Present), '%');
    }

    //Display_WinnerDisplay_Winner(Politicl_PartiesDB, searching_Element(VotesDB, NPolitical_Parties, max_value(VotesDB, NPolitical_Parties)));
}

void Statistics(char **Politicl_PartiesDB, int *VotesDB, int NPolitical_Parties, int NVoters, int Cnt_Active_Votes, int Cnt_Voters_Present, int Cnt_Voters_Absent)
{
    putchar('\n');
    putchar('\n');
    printf("\t<<|ELECTORAL STATISTICS|>>\n\n");
    printf("Registered Political Parties   -   %d\n", NPolitical_Parties);
    printf("Registered Voters              -   %d\n", NVoters);
    printf("Voters Present                 -   %d\n", Cnt_Voters_Present);
    printf("Voters Absent                  -   %d\n", Cnt_Voters_Absent);
    printf("Active Votes                   -   %d\n", Cnt_Active_Votes);
    printf("Inactive Votes                 -   %d\n", NVoters - Cnt_Active_Votes);
    putchar('\n');
    putchar('\n');
    Result_Per_NVotes(Politicl_PartiesDB, VotesDB, NPolitical_Parties, Cnt_Voters_Present);
}

int main(int argc, char **argv)
{
    int *VotesDB, NVoters, VoterID, Decision, NPolitical_Parties = 0, Cnt_Active_Votes = 0, Cnt_Voters_Present = 0, Cnt_Voters_Absent = 0;
    char *Political_PartiesDB[15];

    DateTimeDisplay();
    WelcomeDisplay();
    PassCodeDisplay();

    if (PassCode == 9920)
    {

        DateTimeDisplay();
        WelcomeDisplay();

        switch (AdminDisplay())
        {
        case Register_PP:
            printf("How many political parties do you want to register?\n >>");
            scanf("%d", &NPolitical_Parties);
            printf("Enter Names Of Political Parties.\n");
            for (registered = 1; registered <= NPolitical_Parties; registered++)
            {
                printf("Political Party %d of %d\n >>", registered, NPolitical_Parties);
                Political_PartiesDB[registered] = (char *)calloc(10, sizeof(char));
                assert(Political_PartiesDB[registered] != NULL);
                scanf("%s", Political_PartiesDB[registered]);
            }
            printf("Magnitude Of The Voters:\n >>");
            scanf("%d", &NVoters);
            system("clear");
            switch (SubDisplay())
            {
            case start_voting:
                system("clear");
                VotesDB = calloc(NVoters, sizeof(int));
                for (VoterID = 1; VoterID <= NVoters; VoterID++)
                {
                    switch (Voter_Menu_Display(VoterID))
                    {
                    case Voter_Present:
                        Cnt_Voters_Present++;
                        printf("Registered Parties:\n");
                        DisplayRegisteredParties(Political_PartiesDB, NPolitical_Parties);
                        printf("Cast Your Vote -> Voter %d\n>>", VoterID);
                        scanf("%d", &Decision);
                        VotesDB[Decision]++;
                        Cnt_Active_Votes++;
                        system("clear");
                        break;
                    case Voter_Absent:
                        Cnt_Active_Votes++, Cnt_Voters_Absent++;
                        continue;
                    case Current_Statistics:
                        Statistics(Political_PartiesDB, VotesDB, NPolitical_Parties, NVoters, Cnt_Active_Votes, Cnt_Voters_Present, Cnt_Voters_Absent);
                        break;
                    case End_Voting_Process:
                        Statistics(Political_PartiesDB, VotesDB, NPolitical_Parties, NVoters, Cnt_Active_Votes, Cnt_Voters_Present, Cnt_Voters_Absent);
                        return EXIT_SUCCESS;
                    }
                }
            case Exit_program:
                system("clear");
                Statistics(Political_PartiesDB, VotesDB, NPolitical_Parties, NVoters, Cnt_Active_Votes, Cnt_Voters_Present, Cnt_Voters_Absent);
                exit(0);
            default:
                printf("\nERROR: Wrong Selection!\n");
                exit(0);
            }
        case Exit_Program:
            exit(0);

        default:
            printf("\nERROR: Wrong Selection!\n");
            exit(0);
        }
    }
}