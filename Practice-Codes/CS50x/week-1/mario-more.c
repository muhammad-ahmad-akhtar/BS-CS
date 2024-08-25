#include <stdio.h>

int main (void)
{
    // Getting the input for height.

    int height = 0;
    do
    {
        printf("Enter the height of pyramid: ");
        scanf("%i", &height);
    } while ( height <= 1);

    // Making the grat prramid of Egypt.
    for ( int i = 1; i < height + 1; i++ )
    {
        // Printing first half pyramid.
        for ( int j = 0; j < i; j++)
        {
            printf("#");
        }
        
        // Printing the spaces after pyramid.
        for (int z = 0; z < ((height * 2) - (height + i)) * 2; z++)
        {
            printf(" ");
        }
        
        // Printing second pyramid.
        for ( int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");

    }
}