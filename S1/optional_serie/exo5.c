#include <stdio.h>

int main()
{
    int a, b, a_original, b_original, pgcd, ppcm, temp;
    printf("Please enter a and b values (ex: 1 3): ");
    scanf("%d %d", &a, &b);

    a_original = a;
    b_original = b;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    pgcd = a;

    ppcm = (a_original * b_original) / pgcd;

    printf("PGCD: %d\n", pgcd);
    printf("PPCM: %d\n", ppcm);

    return 0;
}
