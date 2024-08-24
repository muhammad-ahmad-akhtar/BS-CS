/*(Odd or Even) Write a program that reads an integer and determines and displays whether it’s odd or even.
Use the remainder operator. An even number is a multiple of two.
Any multiple of two leaves a remainder of zero when divided by*/

// Solution.

#include <stdio.h>

int main (void)
{
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

//printf("result odd %d\n", number % 2 != 0);
//printf("result even %d\n", number % 2 == 0);

    // Dcision of even or odd
    if (number%2 == 0)
    {
        printf("%s\n", "This is Even number.");
    }
   else
    {
        printf("%s\n", "This is Odd number.");
    }
}