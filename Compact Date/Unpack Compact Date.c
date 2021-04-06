/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Compact Header.h"

int Unpack_Date(int Compact, int Byte_Id) {
    int Day_Mask = 31, Month_Mask = 15, Year_Mask = 127, Day, Month, Year;
    int bit = sizeof (int) * (CHAR_BIT / 2);

    switch (Byte_Id)/*Byte_Id indicates the position of the several bits used to store each element of date(byte_Id = 0,1 & 2.)*/ {
        case 0:
            Day = Compact & (Day_Mask << 11); /*Extracts the integer value of day*/
            return Day >> 11;
        case 1:
            Month = Compact & (Month_Mask << 7); /*Extracts the integer value of month*/
            return Month >> 7;
        case 2:
            Year = Compact & (Year_Mask); /*Extracts the integer value of Year*/
            return Year;
        default:
            printf("\nERROR: Enter 0 for Day,1 for Month, 2 for Year\n"); /*Reports error incase of integer overflow*/

    }

}
