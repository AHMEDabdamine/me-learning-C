#include <stdio.h>

typedef struct
{
    char first_name[50];
    char last_name[50];
    int age;
} person;

int main()
{
    person tab[100];
    int n, i, j;

    printf("enter number of persons: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n person %d\n", i + 1);
        scanf("%s %s %d", tab[i].first_name, tab[i].last_name, &tab[i].age);
    }

    i = 0;
    while (i < n)
    {
        if (tab[i].age >= 20)
        {
            for (j = i; j < n - 1; j++)
            {
                tab[j] = tab[j + 1];
            }
            n--;
        }
        else
        {
            i++;
        }
    }

    printf("\nRemaining persons:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s %s - %d\n", tab[i].first_name, tab[i].last_name, tab[i].age);
    }

    return 0;
}
