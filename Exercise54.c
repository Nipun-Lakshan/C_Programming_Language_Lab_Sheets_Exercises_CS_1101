// CS 1101 - Functions Worksheet - Question 02 - Part c

#include <stdio.h>
#include <stdbool.h>

int getLarger(int num1, int num2); // returns the largest of num1 and num2

int main()
{
    // Variable Declaration
    int largest;
    int i;
    bool isEqual = true;

    // Array Declaration
    float numbers[10];

    // Header String Formatting
    printf("\n==============");
    printf("\nLargest Number");
    printf("\n==============\n\n");

    // Request Data From User
    for (i = 0; i < 10; i++)
    {
        if (i != 9)
        {
            printf("Enter Number 0%d : ", (i + 1));
        }
        else
        {
            printf("Enter Number %d : ", (i + 1));
        }
        if (scanf("%f", &numbers[i]) != 1 || numbers[i] != (int)(numbers[i]))
        {
            printf("Invalid Input! Please enter any number.\n\n");
            i--;
        }
    }

    // Compare the Numbers with Calling a Function
    for (i = 1; i < 10; i++)
    {
        if (numbers[i] != numbers[0])
        {
            isEqual = false;
            break;
        }
    }
    if (isEqual)
    {
        printf("All numbers are equal!\n");
    }
    else
    {
        largest = (int)numbers[0];
        for (i = 1; i < 10; i++)
        {
            largest = getLarger(largest, (int)numbers[i]);
        }
        printf("Largest Number  : %d\n", largest);
    }
    return 0;
}

// Function to find Larger Number
int getLarger(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}