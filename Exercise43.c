// Questions on if, else if, else and nested ifs (Supplementary Worksheet Week 01 - Question 36)

#include <stdio.h>

int main()

{
    // Header String Formatting
    printf("\n==============");
    printf("\nBMI Calculator");
    printf("\n==============\n\n");

    // Variable Declaration
    float weight;
    float height;

    // Request Data From User and Validate it
label1:
    printf("Enter your weight in Kg : ");
    if (scanf("%f", &weight) != 1)
    {
        printf("Please enter a valid input!\n");
        return 1;
    }
    if (weight < 22 || weight > 635)
    {
        printf("Please enter a valid input!\n\n");
        goto label1;
    }

label2:
    printf("Enter your height in m  : ");
    if (scanf("%f", &height) != 1)
    {
        printf("Please enter a valid input!\n");
        return 1;
    }
    if (height < 0.5 || height > 3)
    {
        printf("Please enter a valid input!\n\n");
        goto label2;
    }

    // Calculate the BMI value and Print it
    float bmi = (weight) / (height * height);
    printf("\nBMI Value :- %.2f\n", bmi);

    // Calculate BMI Category
    if (bmi < 18.5)
    {
        printf("Your BMI Category : Underweight\n");
    }
    else if (bmi < 25)
    {
        printf("Your BMI Category : Normal\n");
    }
    else if (bmi < 30)
    {
        printf("Your BMI Category : Overweight\n");
    }
    else
    {
        printf("Your BMI Category : Obese\n");
    }
    return 0;
}