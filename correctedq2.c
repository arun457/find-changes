// question number 2
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5
int main()
{
    int case1[MAX] = {2, 3, 5, 4, 10}, i, sum = 0;
    float average;
    system("cls");
    for (i = 0; i < MAX; i += 1)
    {
        printf("Case %d = %3.2d\n", i, case1[i]);
        sum += *(case1 + i);
    }
    average = (float)(sum / MAX);
    printf("%06.2f", average);
    return 1;
}