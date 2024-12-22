// Flowcharts (Supplementary Worksheet Week 01 - Question 02)

#include <stdio.h>

int main()

{

    // Variable Declaration

    float num1;
    float num2;

    // Request Input From User

    printf("\n");
    printf("Enter Number 01 : ");
    scanf("%f", &num1);
    printf("Enter Number 02 : ");
    scanf("%f", &num2);

    // Calculate the Largest Number and Print it

    if (num1 > num2)
    {
        printf("\n%.2f is larger than %.2f.\n", num1, num2);
    }

    else if (num1 == num2)
    {
        printf("\nThe inserted two numbers are equal!\n");
    }

    else
    {
        printf("\n%.2f is larger than %.2f.\n", num2, num1);
    }

    return 0;
}
