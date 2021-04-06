/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   The Conc. Game.c
 * Author: USER
 *
 * Created on September 17, 2019, 1:49 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    printf("\t    WELCOME TO \"CONCENTRATION\" THE GAME.\n");

    char cPolar = '\0';
    int iRes = 0;
    int iRes2 = 0;
    int iRes3 = 0;
    int iRes4 = 0;
    int iRes5 = 0;
    int i = 0;
    int i2 = 0;
    int i3 = 0;
    int i4 = 0;
    int i5 = 0;
    int iRandomNum = 0;
    int iElspTime = 0;
    int iCurrentTime = 0;
    int iCounter = 0;
    int iActivities = 0;
    srand(time(NULL));

    printf("\n\tYou Wanna Play A Game Of Concentration?(Y/N)");
    scanf("%c", &cPolar);
    if (cPolar == 'Y' || cPolar == 'y') {
        printf("\nGame Levels:\n");
        printf("1.Easy\n2.Intermediate\n3.Difficult");
        printf("\nSelect Level: ");
        scanf("%d", &iActivities);

        switch (iActivities) {
                //The First Level Starts Here @SiMpLy TeSlA
            case 1:
                i = rand() % 100;
                i2 = rand() % 100;
                i3 = rand() % 100;
                printf("\n\t\tEASY MODE");
                printf("\n\tMemorize The Following Numbers!\n");
                printf("\n\t\t%d\t%d\t%d\n", i, i2, i3);
                iCurrentTime = time(NULL);

                do {
                    iElspTime = time(NULL);
                } while ((iElspTime - iCurrentTime) < 5);
                system("clear");

                printf("\nEnter The Three Numbers Accordingly With A Space:\n ");
                scanf("%d%d%d", &iRes, &iRes2, &iRes3);
                if (iRes == i && iRes2 == i2 && iRes3 == i3) {
                    printf("\nCongrats!\n");
                } else {
                    printf("Game Over!\n");
                    printf("The Correct Numbers Are %d-%d-%d\n", i, i2, i3);
                }
                //The First Level Stops Here @SiMpLy TeSlA

                //The First Level Loop Starts Here @SiMpLy TeSlA
                do {
                    printf("\nEnter: 1. New Game \n       2. Play Again\n       3. Exit ");
                    printf("\nResponse: ");
                    scanf("%d", &iActivities);

                    if (iActivities == 1) {
                        printf("\nGame Levels:\n");
                        printf("1.Easy\n2.Intermediate\n3.Difficult");
                        printf("\nSelect Level: ");
                        scanf("%d", &iActivities);

                        switch (iActivities) {
                            case 1:
                                i = rand() % 100;
                                i2 = rand() % 100;
                                i3 = rand() % 100;
                                printf("\n\t\tEASY MODE");
                                printf("\n\tMemorize The Following Numbers!\n");
                                printf("\n\t\t%d\t%d\t%d\n", i, i2, i3);
                                iCurrentTime = time(NULL);

                                do {
                                    iElspTime = time(NULL);
                                } while ((iElspTime - iCurrentTime) < 5);
                                system("clear");

                                printf("\nEnter The Three Numbers Accordingly With A Space:\n ");
                                scanf("%d%d%d", &iRes, &iRes2, &iRes3);
                                if (iRes == i && iRes2 == i2 && iRes3 == i3) {
                                    printf("\nCongrats!\n");
                                } else {
                                    printf("Game Over!\n");
                                    printf("The Correct Numbers Are %d-%d-%d\n", i, i2, i3);
                                }
                            case 2:
                                i = rand() % 100;
                                i2 = rand() % 100;
                                i3 = rand() % 100;
                                i4 = rand() % 100;
                                i5 = rand() % 100;
                                printf("\n\t\tINTERMEDIATE MODE");
                                printf("\n\tMemorize The Following Numbers!\n");
                                printf("\n\t%d\t%d\t%d\t%d\t%d\n", i, i2, i3, i4, i5);

                                iCurrentTime = time(NULL);
                                do {
                                    iElspTime = time(NULL);
                                } while ((iElspTime - iCurrentTime) < 5);
                                system("clear");

                                printf("\nEnter The Five Numbers Accordingly With A Space:\n ");
                                scanf("%d %d %d %d %d", &iRes, &iRes2, &iRes3, &iRes4, &iRes5);

                                if (iRes == i && iRes2 == i2 && iRes3 == i3 && iRes4 == i4 && iRes5 == i5) {
                                    printf("\nCongrats!\n");
                                } else {
                                    printf("Game Over!\n");
                                    printf("The Correct Numbers Are %d-%d-%d-%d-%d\n", i, i2, i3, i4, i5);
                                }
                            case 3:
                                i = rand() % 100;
                                i2 = rand() % 100;
                                i3 = rand() % 100;
                                i4 = rand() % 100;
                                i5 = rand() % 100;
                                printf("\n\tDIFFICULT MODE");
                                printf("\n\tMemorize The Following Numbers!\n");
                                printf("\n\t%d\t%d\t%d\t%d\t%d\n", i, i2, i3, i4, i5);

                                iCurrentTime = time(NULL);
                                do {
                                    iElspTime = time(NULL);
                                } while ((iElspTime - iCurrentTime) < 3);
                                system("clear");

                                printf("\nEnter The Five Numbers Accordingly With A Space:\n ");
                                scanf("%d %d %d %d %d", &iRes, &iRes2, &iRes3, &iRes4, &iRes5);

                                if (iRes == i && iRes2 == i2 && iRes3 == i3 && iRes4 == i4 && iRes5 == i5) {
                                    printf("\nCongrats!\n");
                                } else {
                                    printf("Game Over!\n");
                                    printf("The Correct Numbers Are %d-%d-%d-%d-%d\n", i, i2, i3, i4, i5);
                                }
                        }
                    }

                    if (iActivities == 2) {
                        i = rand() % 100;
                        i2 = rand() % 100;
                        i3 = rand() % 100;
                        printf("\n\t\tEASY MODE");
                        printf("\n\tMemorize The Following Numbers!\n");
                        printf("\n\t\t%d\t%d\t%d\n", i, i2, i3);
                        iCurrentTime = time(NULL);

                        do {
                            iElspTime = time(NULL);
                        } while ((iElspTime - iCurrentTime) < 5);
                        system("clear");

                        printf("\nEnter The Three Numbers Accordingly With A Space:\n ");
                        scanf("%d%d%d", &iRes, &iRes2, &iRes3);
                        if (iRes == i && iRes2 == i2 && iRes3 == i3) {
                            printf("\nCongrats!\n");
                        } else {
                            printf("Game Over!\n");
                            printf("The Correct Numbers Are %d-%d-%d\n", i, i2, i3);
                        }
                    }
                    if (iActivities <= 0 || iActivities >= 3) {
                        printf("\nGoodbye!");
                        printf("\nGame Terminated");
                        return (EXIT_SUCCESS);
                    }
                } while (iActivities == 1 || iActivities == 2 || iActivities == 3);
                //The First Level Loop Stops Here @SiMpLy TeSlA

                //The Second Level Starts Here @SiMpLy TeSlA
            case 2:
                i = rand() % 100;
                i2 = rand() % 100;
                i3 = rand() % 100;
                i4 = rand() % 100;
                i5 = rand() % 100;
                printf("\n\t\tINTERMEDIATE MODE");
                printf("\n\tMemorize The Following Numbers!\n");
                printf("\n\t%d\t%d\t%d\t%d\t%d\n", i, i2, i3, i4, i5);

                iCurrentTime = time(NULL);
                do {
                    iElspTime = time(NULL);
                } while ((iElspTime - iCurrentTime) < 5);
                system("clear");

                printf("\nEnter The Five Numbers Accordingly With A Space:\n ");
                scanf("%d %d %d %d %d", &iRes, &iRes2, &iRes3, &iRes4, &iRes5);

                if (iRes == i && iRes2 == i2 && iRes3 == i3 && iRes4 == i4 && iRes5 == i5) {
                    printf("\nCongrats!\n");
                } else {
                    printf("Game Over!\n");
                    printf("The Correct Numbers Are %d-%d-%d-%d-%d\n", i, i2, i3, i4, i5);
                }
                //Level 2 Ends Here
                //Level 2 Loop Begins Here
                do {
                    printf("\nEnter: 1. New Game \n       2. Play Again\n       3. Exit ");
                    printf("\nResponse: ");
                    scanf("%d", &iActivities);

                    if (iActivities == 1) {
                        printf("\nGame Levels:\n");
                        printf("1.Easy\n2.Intermediate\n3.Difficult");
                        printf("\nSelect Level: ");
                        scanf("%d", &iActivities);

                        switch (iActivities) {
                            case 1:
                                i = rand() % 100;
                                i2 = rand() % 100;
                                i3 = rand() % 100;
                                printf("\n\t\tEASY MODE");
                                printf("\n\tMemorize The Following Numbers!\n");
                                printf("\n\t\t%d\t%d\t%d\n", i, i2, i3);
                                iCurrentTime = time(NULL);

                                do {
                                    iElspTime = time(NULL);
                                } while ((iElspTime - iCurrentTime) < 5);
                                system("clear");

                                printf("\nEnter The Three Numbers Accordingly With A Space:\n ");
                                scanf("%d%d%d", &iRes, &iRes2, &iRes3);
                                if (iRes == i && iRes2 == i2 && iRes3 == i3) {
                                    printf("\nCongrats!\n");
                                    break;
                                } else {
                                    printf("Game Over!\n");
                                    printf("The Correct Numbers Are %d-%d-%d\n", i, i2, i3);
                                    break;
                                }
                            case 2:
                                i = rand() % 100;
                                i2 = rand() % 100;
                                i3 = rand() % 100;
                                i4 = rand() % 100;
                                i5 = rand() % 100;
                                printf("\n\t\tINTERMEDIATE MODE");
                                printf("\n\tMemorize The Following Numbers!\n");
                                printf("\n\t%d\t%d\t%d\t%d\t%d\n", i, i2, i3, i4, i5);

                                iCurrentTime = time(NULL);
                                do {
                                    iElspTime = time(NULL);
                                } while ((iElspTime - iCurrentTime) < 5);
                                system("clear");

                                printf("\nEnter The Five Numbers Accordingly With A Space:\n ");
                                scanf("%d %d %d %d %d", &iRes, &iRes2, &iRes3, &iRes4, &iRes5);

                                if (iRes == i && iRes2 == i2 && iRes3 == i3 && iRes4 == i4 && iRes5 == i5) {
                                    printf("\nCongrats!\n");
                                }
                                break;
                            case 3:
                                i = rand() % 100;
                                i2 = rand() % 100;
                                i3 = rand() % 100;
                                i4 = rand() % 100;
                                i5 = rand() % 100;
                                printf("\n\tDIFFICULT MODE");
                                printf("\n\tMemorize The Following Numbers!\n");
                                printf("\n\t%d\t%d\t%d\t%d\t%d\n", i, i2, i3, i4, i5);

                                iCurrentTime = time(NULL);
                                do {
                                    iElspTime = time(NULL);
                                } while ((iElspTime - iCurrentTime) < 3);
                                system("clear");

                                printf("\nEnter The Five Numbers Accordingly With A Space:\n ");
                                scanf("%d %d %d %d %d", &iRes, &iRes2, &iRes3, &iRes4, &iRes5);

                                if (iRes == i && iRes2 == i2 && iRes3 == i3 && iRes4 == i4 && iRes5 == i5) {
                                    printf("\nCongrats!\n");
                                } else {
                                    printf("Game Over!\n");
                                    printf("The Correct Numbers Are %d-%d-%d-%d-%d\n", i, i2, i3, i4, i5);
                                }
                        }

                    }
                    if (iActivities == 2) {
                        i = rand() % 100;
                        i2 = rand() % 100;
                        i3 = rand() % 100;
                        i4 = rand() % 100;
                        i5 = rand() % 100;
                        printf("\n\t\tINTERMEDIATE MODE");
                        printf("\n\tMemorize The Following Numbers!\n");
                        printf("\n\t%d\t%d\t%d\t%d\t%d\n", i, i2, i3, i4, i5);

                        iCurrentTime = time(NULL);
                        do {
                            iElspTime = time(NULL);
                        } while ((iElspTime - iCurrentTime) < 5);
                        system("clear");

                        printf("\nEnter The Five Numbers Accordingly With A Space:\n ");
                        scanf("%d %d %d %d %d", &iRes, &iRes2, &iRes3, &iRes4, &iRes5);

                        if (iRes == i && iRes2 == i2 && iRes3 == i3 && iRes4 == i4 && iRes5 == i5) {
                            printf("\nCongrats!\n");
                        } else {
                            printf("Game Over!\n");
                            printf("The Correct Numbers Are %d-%d-%d-%d-%d\n", i, i2, i3, i4, i5);
                        }
                    }
                    if (iActivities <= 0 || iActivities >= 3) {
                        printf("\nGoodbye!");
                        printf("\nGame Terminated");
                        return (EXIT_SUCCESS);
                    }
                } while (iActivities == 1 || iActivities == 2 || iActivities == 3);
                //Level Two Loop Ends Here

                //Level Three Starts Here @SiMpLy TeSlA
            case 3:
                i = rand() % 100;
                i2 = rand() % 100;
                i3 = rand() % 100;
                i4 = rand() % 100;
                i5 = rand() % 100;
                printf("\n\tDIFFICULT MODE");
                printf("\n\tMemorize The Following Numbers!\n");
                printf("\n\t%d\t%d\t%d\t%d\t%d\n", i, i2, i3, i4, i5);

                iCurrentTime = time(NULL);
                do {
                    iElspTime = time(NULL);
                } while ((iElspTime - iCurrentTime) < 3);
                system("clear");

                printf("\nEnter The Five Numbers Accordingly With A Space:\n ");
                scanf("%d %d %d %d %d", &iRes, &iRes2, &iRes3, &iRes4, &iRes5);

                if (iRes == i && iRes2 == i2 && iRes3 == i3 && iRes4 == i4 && iRes5 == i5) {
                    printf("\nCongrats!\n");
                } else {
                    printf("Game Over!\n");
                    printf("The Correct Numbers Are %d-%d-%d-%d-%d\n", i, i2, i3, i4, i5);
                }
                i = rand() % 100;
                i2 = rand() % 100;
                i3 = rand() % 100;
                i4 = rand() % 100;
                i5 = rand() % 100;
                printf("\n\tDIFFICULT MODE");
                printf("\n\tMemorize The Following Numbers!\n");
                printf("\n\t%d\t%d\t%d\t%d\t%d\n", i, i2, i3, i4, i5);

                iCurrentTime = time(NULL);
                do {
                    iElspTime = time(NULL);
                } while ((iElspTime - iCurrentTime) < 3);
                system("clear");

                printf("\nEnter The Five Numbers Accordingly With A Space:\n ");
                scanf("%d %d %d %d %d", &iRes, &iRes2, &iRes3, &iRes4, &iRes5);

                if (iRes == i && iRes2 == i2 && iRes3 == i3 && iRes4 == i4 && iRes5 == i5) {
                    printf("\nCongrats!\n");
                } else {
                    printf("Game Over!\n");
                    printf("The Correct Numbers Are %d-%d-%d-%d-%d\n", i, i2, i3, i4, i5);
                }
                //Level Three Stops Here @SiMpLy TeSlA

                //Level Three Loop Starts Here @SiMpLy TeSlA
                do {
                    printf("\nEnter: 1. New Game \n       2. Play Again\n       3. Exit ");
                    printf("\nResponse: ");
                    scanf("%d", &iActivities);

                    if (iActivities == 1) {
                        printf("\nGame Levels:\n");
                        printf("1.Easy\n2.Intermediate\n3.Difficult");
                        printf("\nSelect Level: ");
                        scanf("%d", &iActivities);

                        switch (iActivities) {
                            case 1:
                                i = rand() % 100;
                                i2 = rand() % 100;
                                i3 = rand() % 100;
                                printf("\n\t\tEASY MODE");
                                printf("\n\tMemorize The Following Numbers!\n");
                                printf("\n\t\t%d\t%d\t%d\n", i, i2, i3);
                                iCurrentTime = time(NULL);

                                do {
                                    iElspTime = time(NULL);
                                } while ((iElspTime - iCurrentTime) < 5);
                                system("clear");

                                printf("\nEnter The Three Numbers Accordingly With A Space:\n ");
                                scanf("%d%d%d", &iRes, &iRes2, &iRes3);
                                if (iRes == i && iRes2 == i2 && iRes3 == i3) {
                                    printf("\nCongrats!\n");
                                    break;
                                } else {
                                    printf("Game Over!\n");
                                    printf("The Correct Numbers Are %d-%d-%d\n", i, i2, i3);
                                    break;
                                }
                            case 2:
                                i = rand() % 100;
                                i2 = rand() % 100;
                                i3 = rand() % 100;
                                i4 = rand() % 100;
                                i5 = rand() % 100;
                                printf("\n\t\tINTERMEDIATE MODE");
                                printf("\n\tMemorize The Following Numbers!\n");
                                printf("\n\t%d\t%d\t%d\t%d\t%d\n", i, i2, i3, i4, i5);

                                iCurrentTime = time(NULL);
                                do {
                                    iElspTime = time(NULL);
                                } while ((iElspTime - iCurrentTime) < 5);
                                system("clear");

                                printf("\nEnter The Five Numbers Accordingly With A Space:\n ");
                                scanf("%d %d %d %d %d", &iRes, &iRes2, &iRes3, &iRes4, &iRes5);

                                if (iRes == i && iRes2 == i2 && iRes3 == i3 && iRes4 == i4 && iRes5 == i5) {
                                    printf("\nCongrats!\n");
                                }
                                break;
                            case 3:
                                i = rand() % 100;
                                i2 = rand() % 100;
                                i3 = rand() % 100;
                                i4 = rand() % 100;
                                i5 = rand() % 100;
                                printf("\n\tDIFFICULT MODE");
                                printf("\n\tMemorize The Following Numbers!\n");
                                printf("\n\t%d\t%d\t%d\t%d\t%d\n", i, i2, i3, i4, i5);

                                iCurrentTime = time(NULL);
                                do {
                                    iElspTime = time(NULL);
                                } while ((iElspTime - iCurrentTime) < 3);
                                system("clear");

                                printf("\nEnter The Five Numbers Accordingly With A Space:\n ");
                                scanf("%d %d %d %d %d", &iRes, &iRes2, &iRes3, &iRes4, &iRes5);

                                if (iRes == i && iRes2 == i2 && iRes3 == i3 && iRes4 == i4 && iRes5 == i5) {
                                    printf("\nCongrats!\n");
                                } else {
                                    printf("Game Over!\n");
                                    printf("The Correct Numbers Are %d-%d-%d-%d-%d\n", i, i2, i3, i4, i5);
                                }
                        }
                    }
                    if (iActivities == 2) {
                        i = rand() % 100;
                        i2 = rand() % 100;
                        i3 = rand() % 100;
                        i4 = rand() % 100;
                        i5 = rand() % 100;
                        printf("\n\t\tINTERMEDIATE MODE");
                        printf("\n\tMemorize The Following Numbers!\n");
                        printf("\n\t%d\t%d\t%d\t%d\t%d\n", i, i2, i3, i4, i5);

                        iCurrentTime = time(NULL);
                        do {
                            iElspTime = time(NULL);
                        } while ((iElspTime - iCurrentTime) < 5);
                        system("clear");

                        printf("\nEnter The Five Numbers Accordingly With A Space:\n ");
                        scanf("%d %d %d %d %d", &iRes, &iRes2, &iRes3, &iRes4, &iRes5);

                        if (iRes == i && iRes2 == i2 && iRes3 == i3 && iRes4 == i4 && iRes5 == i5) {
                            printf("\nCongrats!\n");
                        } else {
                            printf("Game Over!\n");
                            printf("The Correct Numbers Are %d-%d-%d-%d-%d\n", i, i2, i3, i4, i5);
                        }
                    }
                    if (iActivities <= 0 || iActivities >= 3) {
                        printf("\nGoodbye!");
                        printf("\nGame Terminated");
                        return (EXIT_SUCCESS);
                    }
                } while (iActivities == 1 || iActivities == 2 || iActivities == 3);
        }

    }
    return (EXIT_SUCCESS);
}

