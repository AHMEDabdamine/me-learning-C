#include <stdio.h>

int main()
{

    int n, sum = 1;

    printf("please enter a value for n :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
    }

    printf("result : %d", sum);

    return 0;
}