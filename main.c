#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "search.h"
#define LENGTH 9

void print(char *array)
{
    for (int i = 0; i < LENGTH / 3; i++)
    {
        for (int j = 0; j < LENGTH / 3; j++)
        {
            printf("%3c|", *(array + LENGTH / 3 * j + i));
        }
        printf("\n------------\n");
    }
    return;
}

int main(void)
{
    char array[LENGTH] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}, count = 0, res = -1;
    srand((unsigned int)time(NULL));
    int turn = rand() % (1 - 0 + 1) + 0, choice;
    do
    {
        print(&array[0]);
        if (turn == 0)
        {
            printf("It's O's turn\n");
            scanf("%d", &choice);
            array[choice - 1] = 'O';
            turn = 1;
        }
        else
        {
            printf("It's X's turn\n");
            scanf("%d", &choice);
            array[choice - 1] = 'X';
            turn = 0;
        }
        res = search(&array[0]);
        count += 1;
    } while ((count < 9) && (res = -1));
    if (res == 0)
    {
        printf("O is winner");
    }
    else if (res == 1)
    {
        printf("X is winner");
    }
    else
    {
        printf("It is drawn");
    }
    return 0;
}