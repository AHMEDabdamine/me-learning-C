#include <stdio.h>

typedef struct
{
    char first_name[50];
    char last_name[50];
    int age;
} person;

int main()
{
    person tab[100], tab_filterd[100];
    int n, i, j;

    printf("enter number of persons: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n please enter the data for the %d ( first_name last_name age \n", i + 1);
        scanf("%s %s %d", tab[i].first_name, tab[i].last_name, &tab[i].age);
    }

    for (i = 0; i < n; i++)
    {
        if (tab[i].age < 20)
        {
            tab_filterd[j] = tab[i];
            j++;
        }
    }
    printf("\nRemaining persons:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s | %s | %d \n", tab_filterd[i].first_name, tab_filterd[i].last_name, tab_filterd[i].age);
    }

    return 0;
}
