/*
 *  Q2. Write a program to store student data using int,
 *      float and char variables and print it.
 */

#include <stdio.h>

int main()
{
    // Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'A';

    // Print variables
    printf("Student id: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student fee: %f\n", studentFee);
    printf("Student grade: %c", studentGrade);

    return 0;
}
/*
*  Output:
 *      Student id: 15
 *      Student age: 23
 *      Student fee: 75.250000
 *      Student grade: A
    */
