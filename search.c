#include <stdio.h>
#include "search.h"

int searchRow(char *array)
{
    int resO = 0, resX = 0;
    for (int i = 0; i < 3; i++)
    {
        resO = 0, resX = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("----%c----\n", *(array + 3 * j + i));
            if (*(array + 3 * j + i) == 'O')
            {
                resO += 1;
            }
            if (*(array + 3 * j + i) == 'X')
            {
                resX += 1;
            }
        }
    }
    if (resO == 3)
    {
        return 0;
    }
    else if (resX == 3)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int searchColumn(char *array)
{
    int resO = 0, resX = 0;
    for (int j = 0; j < 3; j++)
    {
        resO = 0, resX = 0;
        for (int i = 0; i < 3; i++)
        {
            if (*(array + 3 * j + i) == 'O')
            {
                resO += 1;
            }
            if (*(array + 3 * j + i) == 'X')
            {
                resX += 1;
            }
        }
    }
    if (resO == 3)
    {
        return 0;
    }
    else if (resX == 3)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int searchDiagonal(char *array)
{
    int resO = 0, resX = 0;
    for (int i = 0; i < 3; i++)
    {
        resO = 0, resX = 0;
        for (int j = 0; j < 3; j++)
        {
            if (i == j || i == 3 - j - 1)
            {
                if (*(array + 3 * j + i) == 'O')
                {
                    resO += 1;
                }
                if (*(array + 3 * j + i) == 'X')
                {
                    resX += 1;
                }
            }
        }
    }
    if (resO == 3)
    {
        return 0;
    }
    else if (resX == 3)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int search(char *array)
{
    if (searchDiagonal(array) == 0 || searchColumn(array) == 0 || searchRow(array) == 0)
    {
        return 0;
    }
    else if (searchDiagonal(array) == 1 || searchColumn(array) == 1 || searchRow(array) == 1)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}