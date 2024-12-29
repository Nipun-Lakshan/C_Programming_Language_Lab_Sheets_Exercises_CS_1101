// Flowcharts (Supplementary Worksheet Week 01 - Question 08)

#include <stdio.h>

int main()

{
    // Variable Declaration
    float gross_total;
    float discount_rate;
    float discount_amount;
    float net_total;

    // Header String Formatting
    printf("\n===================");
    printf("\nDiscount Calculator");
    printf("\n===================\n\n");

// Request User Input and Validation
label1:
    printf("Input your Gross Total   : Rs. ");
    scanf("%f", &gross_total);
    if (gross_total < 1)
    {
        printf("Invalid input! Please enter a value greater than 0.\n\n");
        goto label1;
    }

    // Calculate the Discount Rate
    if (gross_total <= 2000)
    {
        discount_rate = 1;
    }
    else if (gross_total <= 3000)
    {
        discount_rate = 0.08;
    }
    else
    {
        discount_rate = 0.1;
    }
    if (discount_rate == 1)
    {
        printf("Received Discount Rate   : 0.00%%\n");
    }
    else
    {
        printf("Received Discount Rate   : %.2f%%\n", (discount_rate * 100));
    }

    // Calculate the Discount Amount
    discount_amount = (gross_total * discount_rate);
    if (discount_amount == gross_total)
    {
        printf("Received Discount Amount : Rs. 0.00\n");
    }
    else
    {
        printf("Received Discount Amount : Rs. %.2f\n", discount_amount);
    }

    // Calculate Net Total
    net_total = (gross_total - discount_amount);
    if (net_total == 0)
    {
        printf("Net Total                : Rs. %.2f\n", gross_total);
    }
    else
    {
        printf("Net Total                : Rs. %.2f\n", net_total);
    }

    return 0;
}