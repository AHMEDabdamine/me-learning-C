// Exercice 2.4
// Écrivez un programme qui lit n entiers dans un tableau alloué dynamiquement avec malloc, calcule leur moyenne, puis libère la mémoire.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *t;
    float avg, sum = 0;

    printf("please set the table size ;");
    scanf("%d", &n);
    t = (int *)malloc(n * sizeof(int));
    if (t == NULL)
    {
        printf("allocation failled please try again");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("please enter the vlauue of t[%d]", i);
        scanf("%d", &t[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d |", t[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + t[i];
    }
    avg = sum / n;
    printf(" the average is %f", avg);
    free(t);

    return 0;
}