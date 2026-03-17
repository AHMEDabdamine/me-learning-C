#include <stdio.h>

int main()
{
    int a, b;
    int *p1, *p2;

    printf("enter the first number: ");
    scanf("%d", &a);

    printf("enter second number: ");
    scanf("%d", &b);

    p1 = &a;
    p2 = &b;

    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;

    printf("after swapping\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}