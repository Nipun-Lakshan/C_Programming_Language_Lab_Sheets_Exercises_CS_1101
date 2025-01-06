// CS 1101 - Functions Worksheet - Question 02

#include <stdio.h>

int main()
{
    // Variable Declaration
    double number1;
    double number2;

    // Header String Formatting
    printf("\n==============");
    printf("\nLargest Number");
    printf("\n==============\n\n");

    // Request Data From User
    printf("Enter Number 01 : ");
    if (scanf("%lf", &number1) != 1)
    {
        printf("Invalid Input! Please enter any number.\n");
        return 1;
    }
    printf("Enter Number 02 : ");
    if (scanf("%lf", &number2) != 1)
    {
        printf("Invalid Input! Please enter any number.\n");
        return 1;
    }

    // Compare Two Numbers and Print the Result
    if (number1 > number2)
    {
        printf("%.2lf is greater than %.2lf.\n", number1, number2);
    }
    else if (number1 == number2)
    {
        printf("Two Numbers are equal!\n");
    }
    else
    {
        printf("%.2lf is greater than %.2lf.\n", number2, number1);
    }
    return 0;
}