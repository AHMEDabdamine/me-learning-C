#include <stdio.h>

int square(int n)
{
    return n * n;
}

int main()
{
    int a = 5, b;

    b = square(a);

    printf("%d", b);

    return 0;
}