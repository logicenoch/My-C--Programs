/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <limits.h>

#include "Bit Fnts.h"

unsigned LBitShiftRotation(unsigned data, unsigned shift) {
    int Byte_Word = sizeof (unsigned) * CHAR_BIT;
    data = (data << shift) | (data >> (Byte_Word - shift));
    return data;

}

unsigned RBitShiftRotation(unsigned data, unsigned shift) {
    int Byte_Word = sizeof (unsigned) * CHAR_BIT;
    data = (data >> shift) | (data << (Byte_Word - shift));
    return data;
}