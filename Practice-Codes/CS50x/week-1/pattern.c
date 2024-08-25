#include <stdio.h>

int main (void)
{
    // Get the volume of shape.
    int volume = 0;
    do
    {
        printf("Enter the Volume of shape: ");
        scanf("%i", &volume);
    } while ( volume < 1 );
    
    // Printing the upper portion of shape.
    for ( int i = 0; i < volume; i++ )
    {
        // printing the first triangle of shape.
        int h = 0 ;
        for ( int j = volume + 1; j > i + 1; j-- )
        {
            printf("#");
            h++;
        }
        for ( int k = 0; k < (volume - h) * 2; k++ )
        {
            printf(" ");
        }
        for ( int g = volume + 1; g > i + 1; g--)
        {
            printf("#");
        }
        printf("\n");
    }

    // Printing second portion of the structure.
    for ( int l = 1; l < volume + 1; l++ )
    {
        // Printing first half pyramid.
        for ( int m = 0; m < l; m++)
        {
            printf("#");
        }
        
        // Printing the spaces after pyramid.
        for (int z = 0; z < ((volume * 2) - (volume + l)) * 2; z++)
        {
            printf(" ");
        }
        
        // Printing second pyramid.
        for ( int f = 0; f < l; f++)
        {
            printf("#");
        }
        printf("\n");
    }
}