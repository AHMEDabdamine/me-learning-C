#include <stdio.h>

int main()
{

    for (int i = 1; i <= 50; i++)
    {
        printf("%d ,", i);
    }
    printf(" \n \n ======================================================================= \n \n");

    for (int i = 50; i >= 1; i--)
    {
        printf("%d ,", i);
    }

    return 0;
}