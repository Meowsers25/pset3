/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include <string.h>
#include <stdio.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    int min = 0;
    int max = n - 1;
    int mid = (min + max) / 2;
    if (n < 0)
    {
        return false;
    }
while (max >= min)
{
    if (value == values[mid])
    {
        return true;
    }
    else if (value < values[mid])
    {
        max = mid - 1;
        mid = (min + max) / 2;
    }
    else
    {
        min = mid + 1;
        mid = (min + max) / 2;
    }
}
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int counter = n;
    while (counter > 0)
    {
    for (int i = 0; i < n - 1; i++)
    {
        int x = 0;

        if (values[i] > values[i + 1])
        {
            x = values[i];
            values[i] = values[i + 1];
            values[i + 1] = x;

        }
    }
        counter--;
    }
    return;
}
