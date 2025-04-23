/******************************************************************************
 * File Name    : PerformOperations.c
 * Description  : Implements arithmetic operations on two operands.
 *                Supports addition, subtraction, multiplication, division, and exponentiation.
 *                The program continues to prompt for input until a zero result is obtained.
 * Author       : Ken Alleyne
 * Created On   : 2025-04-19
 * Last Updated : 2025-04-22
 * Version      : 1.0.0
 * Dependencies : stdio.h, Validation.h, Operations.h, Operations.c, Validations.c
 * Compiler     : GCC (GNU Compiler Collection)
 * Notes        : Initial version of the program.
 ******************************************************************************/

// Include statements
#include <stdio.h>
#include "Validation.h"
#include "Operations.h"


// Main function
int main() {

    // Variable declarations
    char operator = '\0';
    long operand1 = 0, operand2 = 0, result = -1;

    do {

        // Prompt for the first operand
        printf("Enter the first operand:\n");
        operand1 = validateOperand(operand1);

        // Prompt for the operator
        printf("Enter the operator (+, -, *, /, ^):\n");
        operator = validateOperator(operator);

        // Prompt for the second operand
        printf("Enter the second operand:\n");
        operand2 = validateOperand(operand2);

        // Perform the operation and display the result
        result = performOperation(operand1, operand2, operator);
        printf("%ld %c %ld = %ld\n", operand1, operator, operand2, result);

    } while (result !=0); // Continue until the result is zero

    return 0; // Return 0 to indicate successful completion

}