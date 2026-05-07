#include <stdio.h>

int Max_2(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int Max_4(int a, int b, int c, int d)
{
    int m1 = Max_2(a, b);
    int m2 = Max_2(c, d);
    return Max_2(m1, m2);
}

int main()
{
    int a, b, c, d, max;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    max = Max_4(a, b, c, d);

    printf("The maximum value is: %d", max);

    return 0;
}