#include <stdio.h>

int areOpposites(int a, int b)
{
    return (a + b == 0);
}

int areInverses(int a, int b)
{
    return (a * b == 1);
}

int main()
{
    int x, y;

    printf("Enter  the two numbers: ");
    scanf("%d %d", &x, &y);

    if (areOpposites(x, y))
    {
        printf(" numbers are opposites\n");
    }
    else
    {
        printf("The numbers are not opposites\n");
    }

    if (areInverses(x, y))
    {
        printf("The numbers are inverses\n");
    }
    else
    {
        printf("The numbers are NOT inverses\n");
    }

    return 0;
}