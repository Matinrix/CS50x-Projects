#include <stdio.h>
int scale;
 void Print_Mario(int scl);
int main(void)
{

    //First we need to get the grid scale from the user
    do
    {
        printf("Enter the grid scale: (Should be between 1-8) \n");
        scanf("%i", &scale);
    } 
      // and i did it because we need a number from 1 to 8
      while (scale < 1 || scale > 8);
     //Lets prinf the results
    Print_Mario(scale);
}
 void Print_Mario(int scl)
        {
            //these two for loops are making our blocks
            for (int i = 1; i < scl; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("# ");
            }
            printf("\n");
        }
        }
