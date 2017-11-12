/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    int value;
    int min = 0;
    int max = strlen(values);
    int n;

    while ( min <= max)
    {
        n = (min + max) / 2;
        if (n === value)
        {
            return true;
        }
        else if (n < value)
        {
            min = n + 1;
        }
        else
        {
            max = n - 1;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    return;
}
