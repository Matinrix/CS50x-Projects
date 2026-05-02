#include <stdio.h>
int scale;
int gridType;
int blocksLook;
int i = 0;
char *block;
int main()
{
    do
    {
        printf("Enter the grid scale: (Should be between 1-8) \n");
        scanf("%i", &scale);
    } while (scale < 1 || scale > 8);
    do
    {
        printf("Choose the grid type : \n 1: A Simple Square    ⌋⌊   2: Simple pyramid\n 3: Reversed pyramid   ⌉⌈  4: Advanced\n");
        scanf("%i", &gridType);
    } while (gridType < 1 || gridType > 4);
    do
    {
        printf("How do you prefer your blocks? \n 1: ▣   ⌋⌊   2: ▦ \n 3: ⊠   ⌉⌈   4: ▨\n");
        scanf("%i", &blocksLook);
    } while (
        blocksLook < 1 || blocksLook > 4);
    if (blocksLook == 1)
    {
        block = "▣";
    }
    else if (blocksLook == 2)
    {
        block = "▦";
    }
    else if (blocksLook == 3)
    {
        block = "H";
    }
    else
    {
        block = "▨";
    }
    if (gridType == 1)
    {
        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                printf("%s ", block);
            }
            printf("\n");
        }
    }
    else if (gridType == 2)
    {
        for (int i = 1; i < scale; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("%s", block);
            }
            printf("\n");
        }
    }
    else if (gridType == 3)
    {
        for (int i = 1; i < scale + 1; i++)
        {
            for (int s = scale; s > i; s--)
            {
                printf("  ");
            }
            for (int j = 0; j < i; j++)
            {
                printf("%s ", block);
            }
            printf("\n");
        }
    }
    else
    {
        for (int i = 1; i < scale + 1; i++)
        {
            for (int s = 0; s < scale - i; s++)
            {
                printf("  ");
            }
            for (int j = 0; j < i; j++)
            {
                printf("%s ", block);
            }
            printf("      ");

            for (int j2 = 0; j2 < i; j2++)
            {
                printf("%s ", block);
            }
            printf("\n");
        }
    }
}
