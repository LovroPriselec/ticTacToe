#include <stdio.h>
#include <stdbool.h>
#include "search.h"

_Bool searchRow(int *array)
{
    int res = 0;
}

_Bool searchColumn(int *array)
{
    int res = 0;
}

_Bool searchDiagonal(int *array)
{
    int res = 0;
}

_Bool search(int *array)
{
    if (searchDiagonal(&array) && searchColumn(&array) && searchRow(&array))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}