// CS 1101 - Functions Worksheet - Question 04 - Part c

#include <stdio.h>
#define COMMON_DIFFERENCE 5

// Function Declaration
int findTermValue(float user_input);
int sumOfTerms();

int main()
{
    // Variable Declaration
    float user_input;
    long long term;
    long long sum;

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

    // Calculate the Value of The Term Entered by The User
    term = findTermValue(user_input);

    // Calculate the Sum upto N
    sum = sumOfTerms((int)user_input);

    // Print The Results
    printf("The Value of the %dth Term : %lld\n", (int)user_input, term);
    printf("The Sum of Terms upto %d : %lld\n", (int)user_input, sum);

    return 0;
}

// Function to Calculate Term
int findTermValue(float user_input)
{
    return (COMMON_DIFFERENCE * ((int)(user_input)-1));
}

// Function to Calculate Total from 1 to N
int sumOfTerms(int user_input)
{
    // Variable Declaration
    long long i;
    long long sum = 0;

    // Calculate the Sum
    for (i = 0; i < user_input; i++)
    {
        sum += findTermValue((i + 1));
    }

    return sum;
}