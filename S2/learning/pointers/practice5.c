#include <stdio.h>

int main()
{
    int t[] = {10, 20, 30, 40, 50};
    int *pT = t;
    int max = *pT;

    for (int i = 0; i < 5; i++)
    {
        if (*(pT + i) > max)
        {
            max = *(pT + i);
        }

        printf("%d |", *(pT + i));
    }
    printf(" the max is : %d", max);
    return 0;
}