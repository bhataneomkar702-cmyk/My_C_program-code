/*
 * ============================================================
 *  File    : q03_print_int_float_char.c
 *  Unit    : 1 - Introduction (Variable, printf, scanf)
 * ------------------------------------------------------------
 *  Q3. Write a program to print an int, a float (2 decimal
 *      places) and a char using printf().
 * ------------------------------------------------------------
 *  Output:
 *      Age: 25
 *      Salary: 45000.50
 *      Grade: A
 * ============================================================
 */

#include <stdio.h>

int main()
{
    int age = 25;
    float salary = 45000.50;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);   // %.2f = 2 decimal places
    printf("Grade: %c\n", grade);

    return 0;
}
