#include <stdio.h>

int main()
{
    int t[] = {10, 20, 30, 40, 50};
    int *pT = t;

    for (int i = 0; i < 5; i++)
    {
        printf("%d |", *(pT + i));
    }

    return 0;
}