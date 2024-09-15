#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#define SIZE 800

int main(void)
{
    char text[SIZE] = "";
    int words = 0;
    int letters = 0;
    int sentences = 0;

    printf("Text: ");
    fgets(text, SIZE, stdin);

    // Get the length of the text
    int length = strlen(text);

    // Edge case: if input is empty
    if (length == 0) {
        printf("No text provided.\n");
        return 0;
    }

    int inWord = 0; // Flag to indicate if we are inside a word

    // Loop through each character in the text
    for (int i = 0; i < length; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
            inWord = 1; // We are inside a word
        }
        else if (isspace(text[i]) || text[i] == '\n' || text[i] == '\t')
        {
            if (inWord) // End of a word
            {
                words++;
                inWord = 0; // Reset the flag
            }
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }

    // Count the last word if the text does not end with a space
    if (inWord) {
        words++;
    }

    // Avoid division by zero
    if (words == 0)
    {
        printf("No words found.\n");
        return 0;
    }

    // Calculate the Coleman-Liau index
    float l = (float)letters / words * 100;
    float s = (float)sentences / words * 100;
    float index = (0.0588 * l) - (0.296 * s) - 15.8;

    // Output the result
    if (index < 1)
    {
        printf("Before Grade 1.\n");
    }
    else if (index >= 1 && index < 16)
    {
        printf("Grade %.0f.\n", round(index));
    }
    else
    {
        printf("Grade 16+.\n");
    }

    return 0;
}
