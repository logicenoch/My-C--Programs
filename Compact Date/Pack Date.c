/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Compact Header.h"

int Date(unsigned Day, unsigned Month, unsigned Year) {
    int Compact_Date = 0; /*Turn all bits off*/

    unsigned bit = sizeof (unsigned) * (CHAR_BIT / 2);

    Compact_Date |= Day << (bit - 5); /*Packs the day (5-bits) at high order bit position*/
    Compact_Date |= Month << (bit - 9); /*Packs the month (4-bits) at the mid order bit position*/
    Compact_Date |= Year; /*Packs the year (7-bits) at the low order bit position*/

    return Compact_Date; /*Contains all the values of the packed date*/
}
