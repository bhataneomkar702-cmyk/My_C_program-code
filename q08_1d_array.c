/*
 * ============================================================
 *  File    : q08_1d_array.c
 *  Unit    : 3 - Array (1D and 2D arrays)
 * ------------------------------------------------------------
 *  Q8. Write a program to declare, initialize and print a
 *      one-dimensional array.
 * ------------------------------------------------------------
 *  Output:
 *      marks[0] = 85
 *      marks[1] = 90
 *      marks[2] = 95
 * ============================================================
 */

#include <stdio.h>

int main()
{
    int marks[3] = {85, 90, 95};

    for (int i = 0; i < 3; i++)
    {
        printf("marks[%d] = %d\n", i, marks[i]);
    }

    return 0;
}
