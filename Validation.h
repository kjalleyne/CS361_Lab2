/******************************************************************************
 * File Name    : Validation.h
 * Description  : This file contains functions declarations for Validate.c
 * Author       : Ken Alleyne
 * Created On   : 2025-04-19
 * Last Updated : 2025-04-22
 * Version      : 1.0.0
 * Dependencies : stdio.h, limits.h
 * Compiler     : GCC (GNU Compiler Collection)
 * Notes        : Initial version of the program.
 ******************************************************************************/

// *****************************************************************************
// Validation.h
#ifndef VALIDATION_H
#define VALIDATION_H

// Include statements
#include <stdio.h>
#include <limits.h>

// Function declarations
int isValidOperand(long operand);
int isValidOperator(char operator);
long validateOperand(long operand);
char validateOperator(char operator);

#endif // VALIDATION_H
// *****************************************************************************