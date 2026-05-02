#include <stdio.h>
float x, y, answer;
int op;
float cal(float a, float b, int c);
int main()
{
    printf("enter the first number : ");
    scanf("%f", &x);
    do
    {
        printf("enter the second number : ");
        scanf("%f", &y);
    } while (y == 0);
    do
    {
        printf("select operation:\n 1:+ | 2:- | 3:* | 4:/");
        scanf("%i", &op);
    } while (op < 1 || op > 4);
    answer = cal(x, y, op);
    printf("Your answer is %f .", answer);
}
float cal(float a, float b, int c)
{
    if (c == 1)
    {
        return a + b;
    }
    else if (c == 2)
    {
        return a - b;
    }
    else if (c == 3)
    {
        return a * b;
    }
    else
    {
        return a / b;
    }
}
