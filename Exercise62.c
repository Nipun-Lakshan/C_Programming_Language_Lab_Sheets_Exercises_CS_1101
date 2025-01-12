// CS 1101 - Functions Worksheet - Question 06

#include <stdio.h>
#include <stdbool.h>

// Function Declaration
void primeNumbers(int user_input_limit);

// Main Function
int main()
{
    // Variable Declaration
    double user_input_limit;

    // Header String Formatting
    printf("\n=============");
    printf("\nPrime Numbers");
    printf("\n=============\n\n");

    // Request an Input From User & Check Whether it is a Numerical Value or not
    printf("Enter a Number : ");
    if (scanf("%lf", &user_input_limit) != 1)
    {
        printf("Invalid Input! Please enter an integer value.\n");
        return 1;
    }

    // Check Whether Input is an Integer or not
    if (user_input_limit - (int)user_input_limit != 0)
    {
        printf("Invalid Input! Please enter an integer value.\n");
        return 1;
    }

    // Check Whether Input is in correct range
    if (user_input_limit < 2)
    {
        printf("Invalid Input! Please enter an integer value which is greater than 1.\n");
        return 1;
    }

    // Call a Function to Find and Print Prime Numbers From 1 to N
    primeNumbers((int)user_input_limit);

    return 0;
}

// Function to Find Prime Numbers
void primeNumbers(int user_input_limit)
{
    // Variable Declaration
    long long i;
    long long j;
    bool isPrime;

    // Loop and Logic to Find Prime Numbers
    printf("Prime Numbers  : [");
    for (i = 2; i <= user_input_limit; i++)
    {
        isPrime = true;
        if (i == 2)
        {
            isPrime = true;
        }
        else
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
        {
            printf("%lld, ", i);
        }
    }
    printf("\b\b]\n");
}