// CS 1101 - Functions Worksheet - Question 03 - Part a

#include <stdio.h>

int main()

{
    // Variable Declaration
    float number;

    // Header String Formatting
    printf("\n======================");
    printf("\nOdd or Even Identifier");
    printf("\n======================\n\n");

    // Request Input From User and Check Whether It is a Numeric Value or Not
    printf("Enter any Integer Number : ");
    if (scanf("%f", &number) != 1)
    {
        printf("Invalid Input! Please enter an integer number.\n");
        return 1;
    }

    // Check Whether the Input is an Integer
    if (number - (int)number != 0)
    {
        printf("Invalid Input! Please enter an integer number.\n");
        return 1;
    }

    // Check Whether Input is an Odd or Even Integer
    if (((int)number) % 2 == 0)
    {
        printf("%d is an even integer number.\n", ((int)number));
    }
    else
    {
        printf("%d is an odd integer number.\n", ((int)number));
    }

    return 0;
}