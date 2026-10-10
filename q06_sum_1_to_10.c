/*
 * ============================================================
 *  File    : q06_sum_1_to_10.c
 *  Unit    : 2 - Decision Making and Looping (if, else if, for)
 * ------------------------------------------------------------
 *  Q6. Write a program to find the sum of numbers from 1 to 10
 *      using a for loop.
 * ------------------------------------------------------------
 *  Output:
 *      The sum of numbers from 1 to 10 is: 55
 * ============================================================
 */

#include <stdio.h>

int main()
{
    int sum = 0;

    // Loop from 1 to 10 and add each number to sum
    for (int i = 1; i <= 10; i++)
    {
        sum += i;   // Same as: sum = sum + i
    }

    // Print the final result
    printf("The sum of numbers from 1 to 10 is: %d\t", sum);

    return 0;
}
