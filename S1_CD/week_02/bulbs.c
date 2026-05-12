#include <stdio.h>
void print_bulb(int bit);
int main (void)
{

}

//You cannot change this function
void print_bulb(int bit)
{
    if (bit == 0)
    {
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        printf("\U0001F7E1");
    }
}
