/*
 * ============================================================
 *  File    : q01_assign_variables.c
 *  Unit    : 1 - Introduction (Variable, printf, scanf)
 * ------------------------------------------------------------
 *  Q1. Write a program to assign the value of one variable
 *      to another and print both.
 * ------------------------------------------------------------
 *  Output:
 *      23      23
 * ============================================================
 */

#include <stdio.h>

int main()
{
    int myNum = 15;
    int myOtherNumber = 23;

    // Assign the value of myOtherNumber (23) to myNum
    myNum = myOtherNumber;

    // myNum is now 23 (before it was 15)
    printf("%d\t%d", myNum, myOtherNumber);

    return 0;
}
