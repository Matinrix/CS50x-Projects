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

jetData jet[5];

int main(void)
{
    jet[0].name = "F-15E";
    jet[0].Speed = 2718;
    jet[0].climb = 325;
    jet[0].turnt = 21;
    jet[0].weight = 15.33;
    jet[1].name = "SU-30";
    jet[1].Speed = 2304;
    jet[1].climb = 240;
    jet[1].turnt = 24;
    jet[1].weight = 19.01;
    jet[2].name = "F/A-18E";
    jet[2].Speed = 1729;
    jet[2].climb = 166.5;
    jet[2].turnt = 24.4;
    jet[2].weight = 8.9;
    jet[3].name = "Rafaele";
    jet[3].Speed = 1908;
    jet[3].climb = 300;
    jet[3].turnt = 20;
    jet[3].weight = 9.42;
    jet[4].name = "F-16";
    jet[4].Speed = 2170;
    jet[4].climb = 305;
    jet[4].turnt = 19.5;
    jet[4].weight = 9.08;
    Print_Names();
    return 0;
}
int Print_Names(void)
{
    for (int i = 0; i < 5; i++)
    {
        printf("\n🛦 %s :\n", jet[i].name);
        printf("    Speed: %d km/h\n", jet[i].Speed);
        printf("    Climb: %.2f m/s\n", jet[i].climb);
        printf("    Turn Time: %.2f seconds\n", jet[i].turnt);
        printf("    Weight: %.2f tons\n", jet[i].weight);
    }
}
