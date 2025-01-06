// CS 1101 - Functions Worksheet - Question 01 - Part d

#include <stdio.h>

// Function to display user details
int displayUser(float userNo)
{

    if (userNo == 1 && (userNo - 1.0) == 0)
    {
        // Sub Header Formatting
        printf("\n===============");
        printf("\nUser 01 Details");
        printf("\n===============\n\n");

        // Print the Result
        printf("Name     : W.M.M.A. Thevindhu Gimantha\n");
        printf("Email    : gimantha@gmail.com\n");
        printf("LinkedIn : https://www.linkedin.com/in/thevindhu-gimantha\n\n");
        return 1;
    }

    else if (userNo == 2 && (userNo - 2.0) == 0)
    {
        // Sub Header Formatting
        printf("\n===============");
        printf("\nUser 02 Details");
        printf("\n===============\n\n");

        // Print the Result
        printf("Name     : N.M. Vikum Deshapriya\n");
        printf("Email    : vikum@gmail.com\n");
        printf("LinkedIn : https://www.linkedin.com/in/vikum-deshapriya\n\n");
        return 1;
    }

    else
    {
        printf("Invalid user number! Please try again.\n");
        return 0;
    }
}

// Main Function
int main()
{
    // Variable Declaration
    float userNo;
    int feed;

    // Header String Formatting
    printf("\n====================");
    printf("\nDisplay User Details");
    printf("\n====================\n\n");

    // Request User Input
    printf("Enter User Number (1 or 2): ");
    scanf("%f", &userNo);

    // Display The Details
    feed = displayUser(userNo);

    // Check Whther Job Done
    if (feed == 1)
    {
        printf("User details displayed successfully.\n");
    }
    else
    {
        printf("Failed to display user details.\n");
    }
    return 0;
}
