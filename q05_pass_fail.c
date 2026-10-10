/*
 * ============================================================
 *  File    : q05_pass_fail.c
 *  Unit    : 2 - Decision Making and Looping (if, else if, for)
 * ------------------------------------------------------------
 *  Q5. Write a program to read marks and display PASS or FAIL
 *      using if and else if (marks must be 0-100).
 * ------------------------------------------------------------
 *  Output:
 *      Enter the student's marks (0-100): 50
 *      Result: PASS
 * ============================================================
 */

#include <stdio.h>

int main()
{
    int marks;

    // Ask the user to enter the marks
    printf("Enter the student's marks (0-100): ");
    scanf("%d", &marks);

    // Validate marks, then check pass/fail
    if (marks < 0 || marks > 100)
    {
        printf("Invalid input! Marks should be between 0 and 100.\n");
    }
    else if (marks >= 40)
    {
        printf("Result: PASS\n");
    }
    else
    {
        printf("Result: FAIL\n");
    }

    return 0;
}
