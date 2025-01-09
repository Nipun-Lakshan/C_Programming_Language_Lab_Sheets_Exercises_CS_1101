// CS 1101 - Functions Worksheet - Question 03 - Part c

#include <stdio.h> // Library for Printf() & Scanf() Functions

// Function Declarations
char isEven(int num);

int main()

{
    // Variable Declaration
    int number;
    char feed;

    // Header String Formatting
    printf("\n======================");
    printf("\nOdd or Even Identifier");
    printf("\n======================\n\n");

    // Request Input From User and Check Whether It is a Numeric Value or Not
    printf("Enter any Integer Number : ");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid Input! Please enter an integer number.\n");
        return 1;
    }

    // Check Whether Input is an Odd or Even Integer
    feed = isEven(number);
    if (feed == '1')
    {
        printf("%d is an even integer number.\n", (number));
    }
    else
    {
        printf("%d is an odd integer number.\n", (number));
    }

    return 0;
}

char isEven(int num)
{
    if ((num & 1) == 0)
    {
        return '1';
    }
    else
    {
        return '0';
    }
}