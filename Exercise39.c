// Questions on if, else if, else and nested ifs (Supplementary Worksheet Week 01 - Question 32)

#include <stdio.h>
int main()
{
    // Variable Declaration
    double number1;
    double number2;

    // Header String Formatting
    printf("\n=======================");
    printf("\nFind the Largest Number");
    printf("\n=======================\n\n");

    // Request Data From User
    printf("Enter Number 01 : ");
    scanf("%lf", &number1);
    printf("Enter Number 02 : ");
    scanf("%lf", &number2);
    printf("\n");

    // Compare the Result
    if (number1 == number2)
    {
        printf("Two numbers are equal!\n");
    }
    else if (number1 > number2)
    {
        printf("%.2lf is greater than %.2lf.\n", number1, number2);
    }
    else
    {
        printf("%.2lf is greater than %.2lf.\n", number2, number1);
    }
    return 0;
}