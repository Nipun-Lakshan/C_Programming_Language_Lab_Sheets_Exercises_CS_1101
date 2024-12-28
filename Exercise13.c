// Flowcharts (Supplementary Worksheet Week 01 - Question 04 - USD Value 01)

#include <stdio.h>

int main()

{
    // Variable Declaration
    float amount_in_lkr;  // Store LKR Amount
    float amount_in_usd;  // Store USD Amount
    float one_usd_in_lkr; // 1 USD Value in LKR

    // Header String Formatting
    printf("\n==================");
    printf("\nCurrency Converter");
    printf("\n==================\n\n");

    // Prompt User for Input
    printf("Enter the amount in LKR : ");
    scanf("%f", &amount_in_lkr);

    // Calculate the USD Value
    one_usd_in_lkr = 298;
    amount_in_usd = amount_in_lkr / one_usd_in_lkr;

    // Print the Result
    printf("Entered Amount in USD   : %.2f\n", amount_in_usd);

    return 0;
}
