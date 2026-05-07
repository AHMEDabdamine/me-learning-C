#include <stdio.h>

int main()
{
    int n;
    int *pN = &n;

    printf("please set the value for n : ");
    scanf("%d", &n);
    for (int i = 1; i < *pN; i++)
    {
        if (*pN % i == 0)
        {
            printf("%d is a devisor of %d \n", i, n);
        }
    }

    return 0;
}