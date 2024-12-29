// Flowcharts (Supplementary Worksheet Week 01 - Question 07)

#include <stdio.h>

int main()

{
    // Variable Declaration
    int t1_result;
    int t2_result;
    int t3_result;
    int total_result;

    // Header String Formatting
    printf("\n================================================");
    printf("\nFinal Grade Calculator for an Enhancement Course");
    printf("\n================================================\n\n");

// Request User Input and Validation
label1:
    printf("Enter Test 01 Marks : ");
    scanf("%d", &t1_result);
    if (t1_result < 0 || t1_result > 100)
    {
        printf("Invalid input! Please enter a value between 0 and 100.\n\n");
        goto label1;
    }

label2:
    printf("Enter Test 02 Marks : ");
    scanf("%d", &t2_result);
    if (t2_result < 0 || t2_result > 100)
    {
        printf("Invalid input! Please enter a value between 0 and 100.\n\n");
        goto label2;
    }

label3:
    printf("Enter Test 03 Marks : ");
    scanf("%d", &t3_result);
    if (t3_result < 0 || t3_result > 100)
    {
        printf("Invalid input! Please enter a value between 0 and 100.\n\n");
        goto label3;
    }

    // Calculate the Total and Print Grade
    total_result = (t1_result + t2_result + t3_result);
    printf("\nTotal : %d", total_result);
    (total_result > 225) ? printf("\nGrade : Satisfied\n") : printf("\nGrade : Unsatisfied\n");

    return 0;
}