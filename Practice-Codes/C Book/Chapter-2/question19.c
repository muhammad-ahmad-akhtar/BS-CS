/*9 (Arithmetic, Largest Value and Smallest Value) Write a program that inputs
three different integers from the keyboard, then displays the sum, the average, 
the product, the smallest and the largest of these numbers. Use only the single-selection
form of the if statement you learned in this chapter. 
The screen dialogue should appear as follows:
Enter three different integers: 13 27 14
Sum is 54
Average is 18
Product is 4914
Smallest is 13
Largest is 27*/

// Solution.

#include <stdio.h>

int main(void)
{
    int x,y,z = 0;
    printf("%s", "Enter the three Integers: ");
    scanf("%d%d%d", &x, &y, &z);

    // SUM
    int sum = x + y +z;
    printf("Sum is %d.\n", sum);

    // Average
    int average = sum/3;
    printf("Average is %d.\n", average);

    // Product
    int product = x * y * z;
    printf("Product is %d.\n", product);

    // Smallest.
    if (x < y && x < z)
    {
        printf("Smallest is %d.\n", x);
    }
    if (y < x && y < z)
    {
        printf("Smallest is %d.\n", y);
    }
    if (z < y && z < x)
    {
        printf("Smallest is %d.\n", z);
    }

    // Largest.
    if (x > y && x > z)
    {
        printf("Lagest is %d.\n", x);
    }
    if (y > x && y > z)
    {
        printf("Largest is %d.\n", y);
    }
    if (z > y && z > x)
    {
        printf("Larglest is %d.\n", z);
    }
}