#include <stdio.h>
#include <string.h>
#include <ctype.h>
char *get_string(char *txt);
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Usage: ./ceasar key \n");
        return 1;
    }
    int x = strlen(argv[1]);
    for (int i = 0; i < x; i++)
    {
        if (isalpha(argv[1][i]))
        {
            printf("Usage: ./ceasar key \n");
            return 1;
        }
    }
    int key = atoi(argv[1]);
    char *text = get_string("plaintext:  ");
    int tlen = strlen(text);
    printf("ciphertext: ");
    for (int j = 0; j < tlen; j++)
    {
        char ci = text[j];
        if ((ci >= 'a' && ci <= 'z') || (ci <= 'Z' && ci >= 'A'))
        {
            ci = ci + (key % 26);
            if (!(isalpha(ci)))
            {
                ci = ci - 26;
            }
        }
        printf("%c", ci);
    }
    printf("\n");
    return 0;
}

char *get_string(char *txt)
{
    char *string;
    printf("%s", txt);
    scanf("%s", string);
    return string;
}
