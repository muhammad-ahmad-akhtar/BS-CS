/*2.18 (Comparing Integers) Write a program that reads two integers from the user
then displays the larger number followed by the words “is larger.” If the numbers
are equal, display the message “These numbers are equal.” 
Use only the single-selection form of the if statement you learned in this chapter.*/

// Solution.

#include <stdio.h>

int main (void)
{
    int x,y = 0;
    printf("%s","Enter two integers: ");
    scanf("%d%d", &x, &y);

    if(x > y)
    {
        printf("%s\n", "X is greater than Y.");
    }
    if(y > x)
    {
        printf("%s\n", "Y is greater than X.");
    }
    if(x == y)
    {
        printf("%s\n", "X is equal to Y.");
    }
}