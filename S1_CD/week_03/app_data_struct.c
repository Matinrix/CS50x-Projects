#include <stdio.h>
#include <string.h>
int Print_Names(void);
typedef struct
{
    char *name;
    int Speed;
    float climb;
    float turnt;
    float weight;
} jetData;

jetData jet[5] = {
    // Name, Speed, Climb, Turn Time, Weight
    {"F-15E", 2718, 325, 21, 15.33},
    {"SU-30", 2304, 240, 24, 19.01},
    {"F/A-18E", 1729, 166.5, 24.4, 8.9},
    {"Rafaele", 1908, 300, 20, 9.42},
    {"F-16", 2170, 305, 19.5, 9.08}};

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        printf("🛦 %i : %s \n", i + 1, jet[i].name);
    }
}
int Print_Names(void)
{
}
