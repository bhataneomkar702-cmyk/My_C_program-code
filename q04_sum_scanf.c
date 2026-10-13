/*
 * ============================================================
 *  File    : q04_sum_scanf.c
 *  Unit    : 1 - Introduction (Variable, printf, scanf)
 * ------------------------------------------------------------
 *  Q4. Write a program to read two integers using scanf()
 *      and print their sum.
 * ------------------------------------------------------------
 *  Output:
 *      Enter two integers: 10 20
 *      10 + 20 = 30
 * ============================================================
 */

#include <stdio.h>

int main()
{
    int number1, number2, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // Calculate the sum
    sum = number1 + number2;

    printf("%d + %d = %d", number1, number2, sum);

    return 0;
}
