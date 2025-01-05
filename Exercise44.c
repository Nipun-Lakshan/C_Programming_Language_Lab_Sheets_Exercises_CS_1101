// Questions on if, else if, else and nested ifs (Supplementary Worksheet Week 01 - Question 37)

#include <stdio.h>

int main()
{
    // Header String Formatting
    printf("\n=========================");
    printf("\nNumber of Days in a Month");
    printf("\n=========================\n\n");

    // Variable Declaration
    int month;

    // Request Data From User
    while (1)
    {
        printf("Enter a month (1 - 12): ");
        if (scanf("%d", &month) != 1)
        {
            printf("Invalid Input! Please enter an integer between 1 - 12.\n\n");
            while (getchar() != '\n')
                ;
        }
        else
        {
            break;
        }
    }

    // Validate the Input
    if (month < 1 || month > 12)
    {
        printf("Invalid Input! Please enter an integer between 1 - 12.\n");
        return 1;
    }
    else
    {
        switch (month)
        {
        case 1:
            printf("Number of Days        : 31\n");
            break;
        case 2:
            printf("Number of Days        : 28\n");
            break;
        case 3:
            printf("Number of Days        : 31\n");
            break;
        case 4:
            printf("Number of Days        : 30\n");
            break;
        case 5:
            printf("Number of Days        : 31\n");
            break;
        case 6:
            printf("Number of Days        : 30\n");
            break;
        case 7:
            printf("Number of Days        : 31\n");
            break;
        case 8:
            printf("Number of Days        : 31\n");
            break;
        case 9:
            printf("Number of Days        : 30\n");
            break;
        case 10:
            printf("Number of Days        : 31\n");
            break;
        case 11:
            printf("Number of Days        : 30\n");
            break;
        case 12:
            printf("Number of Days        : 31\n");
            break;
        }
    }

    return 0;
}