// we need a program that will check for all null values in a array of integers and list there index

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *p;
    printf("please enter how many numbers you have: ");
    scanf("%d", &n);
    int *tab = malloc(n * sizeof(int));
    if (tab == NULL)
    {
        printf("mem allocation failed ");
        return 1;
    }
    p = tab;
    // filling the table
    for (int i = 0; i < n; i++)
    {
        printf("filll #%d - ", i + 1);
        scanf("%d", p + i);
    }
    // check for null values and than print there index :
    for (int i = 0; i < n; i++)
    {
        if (p[i] == 0)
        {
            printf("%d", i);
        }
    }
    free(tab);
    p = NULL;

    return 0;
}