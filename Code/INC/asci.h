/**
 * @file asci.h
 * @author kavya (rkavyaharigol17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifdef ASCI_H
#define ASCI_H

#include <stdio.h>
#include <string.h>
#include <stdint.h>
union mychar
{
char a[20];
uint8_t integer;
};

int func(union mychar t1);

#endif