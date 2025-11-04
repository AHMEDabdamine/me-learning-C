#include <stdio.h>

int main()
{
    int num;
    printf("please enter a number : ");
    scanf("%d", &num);
    for (int i = 1; i < 10; i++)
    {

        printf("%d | ", num + i);
    }

    return 0;
}