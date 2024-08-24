/*(Arithmetic) Write a program that reads two integers from the user 
then displays their sum, product, difference, quotient and remainder.*/

// Solution

#include <stdio.h>

int main (void)
{
    int x , y = 0;
    printf("%s", "Enter Two Integers: "); // Prompt the user for two integers.
    scanf("%d%d", &x , &y); // Gets the vaue of two integers from the user.

    // Sum of two Integers.
    printf("Sum of Integers is %d\n", x + y);

    // Differnce of two integers.
    printf("Difference of teo integers is %d\n", x - y);

    // Product of two integers.
    printf("Product of two integers is %d\n", x * y);

    // Quotient of two integers.
    printf("Quotient of two integers is %d\n", x / y);

    // Remainder of two integers.
    printf("Remainderof two Integers is %d\n", x % y);
}