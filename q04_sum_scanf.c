
 *  Q4. Write a program to read two integers using scanf()
 *      and print their sum.


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
