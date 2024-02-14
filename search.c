#include <stdio.h>
#include <stdbool.h>
#include "search.h"

_Bool searchRow(int *array)
{
}

_Bool searchColumn(int *array)
{
}

_Bool searchDiagonal(int *array)
{
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