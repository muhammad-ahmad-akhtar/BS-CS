#include <stdio.h>

int main (void)
{
    int height = 0;
    printf("Enter the height of pyramid: ");
    scanf("%i", &height);

    while ( height <= 1)
    {
        printf("Enter the height of pyramid: ");
        scanf("%i", &height);
    }

    // Building the pyramid.
    for (int i = 1; i < height + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}