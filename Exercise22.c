// Flowcharts (Worksheet Week 01 - Question 07)

#include <stdio.h>

int main()
{
    // Variable Declaration
    int i; // Loop Index
    int largest;

    // Header String Formatting
    printf("\n==============");
    printf("\nLargest Number");
    printf("\n==============\n\n");

    // Declaration of an Array
    int numbers[100];

    // Request Input From User
    for (i = 0; i < 100; i++)
    {
        if (i < 9)
        {
            printf("Enter Number  0%d : ", (i + 1));
        }
        else if (i < 99)
        {
            printf("Enter Number  %d : ", (i + 1));
        }
        else
        {
            printf("Enter Number %d : ", (i + 1));
        }
        scanf("%d", &numbers[i]);
    }

    // Analyze the Numbers
    for (i = 0; i < 99; i++)
    {
        if (numbers[i] < numbers[i + 1])
        {
            largest = numbers[i + 1];
        }
    }
    printf("\nLargest Number : %d\n", largest);

    return 0;
}
