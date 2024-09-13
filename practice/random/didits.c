#include <stdio.h>

int main(void)
{
    // Getting the input from the user.
    printf("Number: ");
    int number = 0;
    scanf("%i", &number);

    // Implementing the logic.
    int i = number;
    int j,x = 0;
    char binary[] = {};
    while ( i > 0 )
    {
        j = i % 2;
        //printf("%i::%i", i, j);
        // Printing Bulbs.
        binary[x] = j;
        //printf(" (%i) ", j);
        i = i / 2;
        x++;
    }
}