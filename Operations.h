/******************************************************************************
 * File Name    : Operations.h
 * Description  : This file contains the declarations of functions defined in Operations.c
 * Author       : Ken Alleyne
 * Created On   : 2025-04-19
 * Last Updated : 2025-04-22
 * Version      : 1.0.0
 * Dependencies : stdio.h
 * Compiler     : GCC (GNU Compiler Collection)
 * Notes        : Initial version of the program.
 ******************************************************************************/

// *****************************************************************************
// Operations.h
#ifndef OPERATIONS_H
#define OPERATIONS_H

// Include statements
#include <stdio.h>

// Function declarations for arithmetic operations
long add(long a, long b);
long subtract(long a, long b);
long multiply(long a, long b);
long divide(long a, long b);
long exponentiate(long base, long exp);
long performOperation(long operand1, long operand2, char operator);

#endif // OPERATIONS_H
// *****************************************************************************