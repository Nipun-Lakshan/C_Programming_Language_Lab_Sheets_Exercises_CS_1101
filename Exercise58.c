// CS 1101 - Functions Worksheet - Question 04 - Part a

#include <stdio.h>
#define COMMON_DIFFERENCE 5

int main()
{
    // Variable Declaration
    float user_input;
    long long term;

    // Header String Formatting
    printf("\n==========================================");
    printf("\nArithmetic Series : [0, 5, 10, 15, ..., n]");
    printf("\n==========================================\n\n");

    // Request Input From User and Check Whether Input is a Numerical Value or Not
    printf("Enter the Term Number in the Series : ");
    if (scanf("%f", &user_input) != 1)
    {
        printf("Invalid Input! Please enter any integer which is greater than or equal to 1.\n");
        return 1;
    }

    // Validate the User Input
    if (user_input <= 0)
    {
        printf("Invalid Input! Please enter any integer which is greater than or equal to 1.\n");
        return 1; // Check The Range
    }
    else if ((user_input - (int)user_input) != 0)
    {
        printf("Invalid Input! Please enter any integer which is greater than or equal to 1.\n");
        return 1; // Check Whether It is an Integer
    }

    // Calculate the Value of The Term Entered By The User
    term = (COMMON_DIFFERENCE * ((int)(user_input)-1));

    // Print The Result
    printf("The Value of the %dth Term : %lld\n", user_input, term);

    return 0;
}