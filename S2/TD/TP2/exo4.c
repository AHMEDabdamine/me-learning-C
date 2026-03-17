#include <stdio.h>

int main()
{
    int n, i;
    int *p;

    printf("enter an int that does not equal to zero ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("n must be different from 0\n");
        return 0;
    }

    p = &n;

    printf("divisors of %d are\n", *p);

    for (i = 1; i <= *p; i++)
    {
        if ((*p) % i == 0)
        {
            printf("%d |", i);
        }
    }

    return 0;
}