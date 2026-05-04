#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
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
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./ceasar key \n");
            return 1;
        }
    }
    int key = atoi(argv[1]);
    char text[1024];
    printf("plaintext:  ");
    fgets(text, sizeof(text), stdin);
    int tlen = strlen(text);
    printf("ciphertext: ");
    for (int j = 0; j < tlen; j++)
    {
        char ci = text[j];
        if (isalpha(ci))
        {
            ci = ci + (key % 26);
            if (!(isalpha(ci)))
            {
                ci = ci - 26;
            }
            printf("%c", ci);
        }
        else
        {
            ci = text[j];
            printf("%c", ci);
        }
    }
    printf("\n");
    return 0;
}
