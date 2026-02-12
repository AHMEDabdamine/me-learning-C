#include <stdio.h>

int main()
{
    int num;
    printf("please enter a number : ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        for (int i = 0; i < 20; i++)
        {

            printf("%d | ", num + i);
        }
    }
    else if (num % 2 != 0)
    {
        for (int i = 1; i < 10; i += 2)
        {

            printf("%d | ", num + i);
        }
    }

    return 0;
}