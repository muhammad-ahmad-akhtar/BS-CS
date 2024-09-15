/*(Hollow Square of Asterisks) Modify the program you wrote in the preceding
exercise so that it prints a hollow square. For example, if your program reads a size of
5, it should print
*****  
*   *  
*   *  
*   *  
*****  
*/

#include <stdio.h>

int main(void)
{
    int size = 0;
    printf("Size: ");
    scanf("%d", &size);
    
    for ( int i = 0; i < size; i++)
    {
        printf("#");
        //printf("%i", size);
        //printf("%i", i);
        if ( i == 0 )
        {
            for ( int j = 0; j < size - 1; j++ )
            {
                printf("#");
            }
        }
        if ( i == size - 1 )
        {
            for ( int h = size; h > 1; h-- )
            {
                printf("#");
            }
        }
        if ( i != 0 && i != size - 1 )
        {
            for ( int z = 0; z < size - 2; z++ )
            {
                printf(" ");
            }
            printf("#");
        }
        printf("\n");
    }
}