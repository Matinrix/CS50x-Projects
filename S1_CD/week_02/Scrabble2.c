#include <stdio.h>
#include <string.h>
#include <ctype.h>
int POINTS[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char *wordC)
{
    int score = 0;
    int len = strlen(wordC);
    for (int i = 0; i < len; i++)
    {
        char cc = toupper(wordC[i]);
        if (cc >= 'A' && cc <= 'Z')
        {
            int count = cc - 'A';
            score += POINTS[count];
        }
    }
    return score;
}
int main()
{
    char word1[255];
    char word2[255];
    printf("Player 1: ");
    scanf("%s", word1);
    printf("Player 2: ");
    scanf("%s", word2);
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    if (score1 > score2)
    {
        printf("Player 1 wins!");
        return 0;
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!");
        return 0;
    }
    else
    {
        printf("Tie!");
        return 0;
    }
}
