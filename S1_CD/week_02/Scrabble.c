#include <stdio.h>
// points:
int POINTS[26] = {1, 3, 3, 2
, 1, 4, 2, 4, 1, 8, 5, 1,
3, 1, 1, 3, 10, 1, 1, 1,
1, 4, 4, 8, 4, 10};
char Letters[26] = {'A', 'B', 'C', 'D', 
'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 
'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 
'U', 'V', 'W', 'X', 'Y', 'Z'};
int main(void)
{
    // get input words from both players
    char *word1[];
    char *word2[];
    printf("Player 1 ; ");
    scanf("%s", &word1);
    printf("Player 2; ");
    scanf("%s", &word2);
    // score botch words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    // print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!");
    }
    else
    {
        printf("Tie!");
    }
}
int compute_score(char *word)
{
    // compute and return score for string
    int chLen = GetLen(word);
    int score = 0;
    for (int i = 0; i < chLen; i++)
    {
        char cc = toUpper(word[i]);
        for (int j = 0; j < 26; j++)
        {
            if (Letters[j] == cc)
            {
                score += POINTS[j];
                break;
            }
        }
    }
    return score;
}
char toUpper(char *word)
{
    if (word >= 'a' && word <= 'z')
    {
        return word - 32;
    }
    return word;
}
int GetLen(char *word)
{
    int len = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
