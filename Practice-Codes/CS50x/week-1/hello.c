#include <stdio.h>

int main (void)
{
    char name[0];
    char second[0];
    printf("What is Your name? ");
    scanf("%s%s", &name,&second);
    printf("Hello, %s %s.\n", name, second);
}