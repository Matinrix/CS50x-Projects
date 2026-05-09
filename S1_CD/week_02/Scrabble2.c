#include <stdio.h>
int POINTS[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int getLen(char *word)
{
    int len = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
char toUpper(char *word)
{
    int Clen = getLen(word);

    for (int i = 0; i < Clen; i++)
    {
        char cc = word[i];
        if (cc <= 'z' && cc >= 'a')
        {
            return cc - ('A' - 'a');
        }
        return cc;
    }
}
int compute_score(char *word)
{
    int score = 0;
    int len = getLen(word);
    for (int i = 0; i < len; i++)
    {
        char cc = toUpper(word[i]);
        int count = cc - 65;
        score += POINTS[count];
    }
    return score;
}

int main()
{
    char *word1;
    char *word2;
    printf("Player 1: ");
    scanf("%s", &word1);
    printf("Player 2: ");
    scanf("%s", &word2);
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
    }
    else
    {
        printf("Tie!");
    }
}
