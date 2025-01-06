// CS 1101 - Functions Worksheet - Question 02 - Part a

#include <stdio.h>

int getLarger(int num1, int num2); // returns the largest of num1 and num2

int main()
{
    // Variable Declaration
    float num1;
    float num2;
    int largest;

    // Header String Formatting
    printf("\n==============");
    printf("\nLargest Number");
    printf("\n==============\n\n");

    // Request Data From User
    printf("Enter Number 01 : ");
    if (scanf("%f", &num1) != 1 || num1 != (int)(num1))
    {
        printf("Invalid Input! Please enter any number.\n");
        return 1;
    }
    printf("Enter Number 02 : ");
    if (scanf("%f", &num2) != 1 || num2 != (int)(num2))
    {
        printf("Invalid Input! Please enter any number.\n");
        return 1;
    }

    // Compare the Numbers with Calling a Function
    if (num1 == num2)
    {
        printf("Two Numbers are equal!\n");
    }
    else
    {
        largest = getLarger((int)num1, (int)num2);
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