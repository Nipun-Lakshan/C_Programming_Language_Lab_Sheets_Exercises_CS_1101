// CS 1101 - Functions Worksheet - Question 08

#include <stdio.h>

int sumOfIntegers(int user_input, long long sum)
{
    // Termination Logic
    if (user_input < 1)
    {
        return sum;
    }

    // Logic To Calculate Sum
    sum += user_input;
    user_input--;
    sumOfIntegers(user_input, sum);
}

int main()
{
    // Variable Declaration
    double user_input;
    long long sum;

    // Header String Formatting
    printf("\n======================");
    printf("\nSum of Natural Numbers");
    printf("\n======================\n\n");

    // Request an Input From User & Check Whether it is a Numerical Value or not
    printf("Enter a positive integer : ");
    if (scanf("%lf", &user_input) != 1)
    {
        printf("Invalid Input! Please enter a numerical value.\n");
        return 1;
    }

    // Check Whether Input is an Integer or not
    if (user_input - (int)user_input != 0)
    {
        printf("Invalid Input! Please enter an integer value.\n");
        return 1;
    }

    // Check Whether Input is in correct range
    if (user_input < 1)
    {
        printf("Invalid Input! Please enter an integer value which is greater than 1.\n");
        return 1;
    }

    // Call The Recursive Function
    sum = sumOfIntegers((int)user_input, 0);

    // Print The Result
    printf("Sum of Natural Numbers   : %lld\n", sum);

    return 0;
}