#include <cs50.h>
#include <stdio.h>

void sort(int values[], int n);

int main(void)
{
    int list[5] = {5, 4, 3, 2, 1};
    sort(list, 5);

}

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