#include <stdio.h>
#include <string.h>
#include <ctype.h>
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
    {
        printf("yay");
        return 0;
    }
}
