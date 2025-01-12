// CS 1101 - Functions Worksheet - Question 07

#include <stdio.h>
#include <math.h>

// Function Declaration
void powerSeries(int user_input_base)
{
    // Variable Declaration
    int i;
    long long temp;

    // Logic To Print Series
    printf("Power Series : [");
    for (i = 0; i < 10; i++)
    {
        temp = pow(user_input_base, i);
        printf("%lld, ", temp);
    }
    printf("\b\b]\n");
}

// Main Function
int main()
{
    // Variable Declaration
    double user_input_base;

    // Header String Formatting
    printf("\n============");
    printf("\nPower Series");
    printf("\n============\n\n");

    // Request an Input From User & Check Whether it is a Numerical Value or not
    printf("Enter a base : ");
    if (scanf("%lf", &user_input_base) != 1)
    {
        printf("Invalid Input! Please enter a numerical value.\n");
        return 1;
    }

    // Check Whether Input is an Integer or not
    if (user_input_base - (int)user_input_base != 0)
    {
        printf("Invalid Input! Please enter an integer value.\n");
        return 1;
    }

    // Check Whether Input is in correct range
    if (user_input_base < 2)
    {
        printf("Invalid Input! Please enter an integer value which is greater than 1.\n");
        return 1;
    }

    // Call The Function
    powerSeries((int)user_input_base);

    return 0;
}