#include <stdio.h>

int isPerfect(int n)
{
    int sum = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return (sum == n);
}

int main()
{
    printf("perfect numbers between 1 and 10000 are  :");

    for (int i = 2; i <= 10000; i++)
    {
        if (isPerfect(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}