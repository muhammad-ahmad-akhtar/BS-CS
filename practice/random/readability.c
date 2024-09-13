#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

int compute_score(char* word);

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    // Getting two inputs from the user.
    char* word1[] = {};
    char* word2[] = {};

    printf("Player1: ");
    scanf("%s", &word1);

    printf("Player2: ");
    scanf("%s", &word2);

    //Calculating scores of each input.
    int score1 = compute_score(word1);
    int score2 = computer_score(word2);

    // Printing the winner.
    if ( score1 > score2 )
    {
        printf("Player1 Wins.\n");
    }
    else if ( score2 > score1 )
    {
        printf("Player2 Wins.\n");
    }
    else
    {
        printf("Tie.\n");
    }
}

int compute_score(char* word)
{
    int score = 0;
    int len = strlen(word);
    for ( int i = 0; i < len;  i++ )
    {
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }
    return score;
}