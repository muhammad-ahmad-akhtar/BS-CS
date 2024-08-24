/*(Sort in Ascending Order) Write a program that inputs three different numbers
from the user. Display the numbers in increasing order. Recall that an if statement’s
body can contain more than one statement. Prove that your script works by running
it on all six possible orderings of the numbers. Does your script work with duplicate
numbers? 
[This is challenging. In later chapters you’ll do this more conveniently andwith many more numbers.]*/

// Solution.

#include <stdio.h>

int main (void)
{
    printf("Enter Three numbers: ");
    int x, y, z = 0;
    scanf("%d%d%d", &x, &y, &z);

    // First Digit.

    if (x < y && x < z)
    {
        printf("%d ", x);
    }
    else if (y < z && y < x)
    {
        printf("%d ", y);
    }
    else if (z < x && z < y)
    {
        printf("%d ", z);
    }

    // Second Digit

    if (x > y && x < z || x < y && x > z)
    {
        printf("%d ", x);
    }
    else if (y > x && y < z || y < x && y > z)
    {
        printf("%d ", y);
    }
    else if (z > y && z < x || z < y && z > x)
    {
        printf("%d ", z);
    }

    // Third Digit.

    if (x > y)
    {
        printf("%d", x);
    }
    else if (y > z)
    {
        printf("%d", y);
    }
    else if (z > x)
    {
        printf("%d", z);
    }
}