// Questions on if, else if, else and nested ifs (Supplementary Worksheet Week 01 - Question 34)

#include <stdio.h>

int main()

{

    // Variable Declaration

    float num1, num2, num3, max;

    // Prompt User for Input

    printf("\nEnter Number 01 : ");
    scanf("%f", &num1);
    printf("Enter Number 02 : ");
    scanf("%f", &num2);
    printf("Enter Number 03 : ");
    scanf("%f", &num3);

    // Calculate the Largest Number and Print the result

    if (num1 == num2 && num2 == num3)
    {
        printf("\nThe inserted three numbers are equal!\n");
    }

    else
    {
        max = num1;

        if (num2 > max)
        {
            max = num2;
        }
        if (num3 > max)
        {
            max = num3;
        }

        printf("\nThe largest number from %.2f, %.2f and %.2f is %.2f.\n", num1, num2, num3, max);
    }

    return 0;
}