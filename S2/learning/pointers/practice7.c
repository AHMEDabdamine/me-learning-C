#include <stdio.h>
#include <stdlib.h>
int main()
{
    // we need to get the sum of an array using pointers
    int n, sum = 0;
    printf("please enter how many numbers you have: ");
    scanf("%d", &n);
    int *t = malloc(n * sizeof(int));
    if (t == NULL)
    {
        printf("mem allocation failed ");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("arr  #%d - ", i + 1);

        scanf(" %d", &t[i]);
    }
    // calculating the sum of elements    int *p = arr;
    int *pt = t;
    for (int i = 0; i < n; i++)
    {
        sum = sum + *pt;
        pt++;
    }
    printf("\n%d", sum);
    free(t);
    t = NULL;
    return 0;
}