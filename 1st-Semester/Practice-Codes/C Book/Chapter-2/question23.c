/*(Multiples) Write a program that reads two integers and 
determines and displays whether the first is a multiple of the second.
Use the remainder operator.*/

// Solution.

#include <stdio.h>

int main (void)
{
    int x , y = 0;
    printf("Enter the two numbers (x , y): ");
    scanf("%d%d", &x , &y);

    // Decision Making
    if ( x % y == 0 )
    {
        printf("y is multiple of x.\n");
    }
    else if ( y % x == 0)
    {
        printf("x is multiple of y.\n");
    }
    else
    {
        printf("Numbers are not multiples of each otheers.\n");
    }
}