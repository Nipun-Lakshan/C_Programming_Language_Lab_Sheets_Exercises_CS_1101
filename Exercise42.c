// Questions on if, else if, else and nested ifs (Supplementary Worksheet Week 01 - Question 35)

#include <stdio.h>

int main()
{
    // Variable Declaration
    int mark;

    // Header String Formatting
    printf("\n================");
    printf("\nGrade Calculator");
    printf("\n================\n\n");

    // Request Data From User
    printf("Enter Student's Result : ");
    if (scanf("%d", &mark) != 1)
    {
        printf("Invalid Input! Please enter an integer from 0 to 100.\n");
        return 1;
    }

    // Validation of the Input
    if (mark < 0 || mark > 100)
    {
        printf("Invalid Input! Please enter a mark between 0 and 100.\n");
        return 1;
    }

    // Grade Calculation
    if (mark <= 35)
    {
        printf("Result                 : Grade F\n");
    }
    else if (mark <= 45)
    {
        printf("Result                 : Grade D\n");
    }
    else if (mark <= 55)
    {
        printf("Result                 : Grade C\n");
    }
    else if (mark <= 70)
    {
        printf("Result                 : Grade B\n");
    }
    else
    {
        printf("Result                 : Grade A\n");
    }

    return 0;
}