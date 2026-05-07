// for this we create a program that will swap an array using pointers and wihout a 2nd array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp, *end, *start, n;

    printf("please enter how many numbers you have: ");
    scanf("%d", &n);
    int *tab = malloc(n * sizeof(int));
    //
    if (tab == NULL)
    {
        printf("failed to allocate memory");
        return 1;
    }
    // fill the table
    for (int i = 0; i < n; i++)
    {
        printf("please inter the value #%d", i + 1);
        scanf("%d", tab + i);
    }
    start = tab;
    end = tab + n - 1;
    while (start < end)
    {

        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d|", tab[i]);
    }

    return 0;
}