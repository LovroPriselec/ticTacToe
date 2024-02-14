#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "search.h"
#define LENGTH 9

void print(int *polje)
{
    for (int i = 0; i < LENGTH / 3; i++)
    {
        for (int j = 0; j < LENGTH / 3; j++)
        {
            printf("%3d|", *(polje + LENGTH / 3 * i + j));
        }
        printf("\n------------");
    }
    return;
}

int main(void)
{
    int array[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    srand((unsigned int)time(NULL));
    int turn = rand() % (1 - 0 + 1) + 0;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", turn);
        turn = rand() % (1 - 0 + 1) + 0;
    }
    return 0;
}