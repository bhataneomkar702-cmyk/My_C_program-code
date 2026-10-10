/*
 * ============================================================
 *  File    : q07_2d_array.c
 *  Unit    : 3 - Array (1D and 2D arrays)
 * ------------------------------------------------------------
 *  Q7. Write a program to declare, initialize and print a
 *      2D array (2x2 matrix).
 * ------------------------------------------------------------
 *  Output:
 *      matrix[0][0] = 10
 *      matrix[0][1] = 20
 *      matrix[1][0] = 30
 *      matrix[1][1] = 40
 * ============================================================
 */

#include <stdio.h>

int main()
{
    int matrix[2][2] = {{10, 20}, {30, 40}};

    // Outer loop = rows, inner loop = columns
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}
