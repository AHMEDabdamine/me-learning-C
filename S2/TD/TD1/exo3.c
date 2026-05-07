#include <stdio.h>
#include <string.h>

typedef struct
{
    char first_name[50];
    char last_name[50];
    int age;
} person;

int main(void)
{
    person tab[100];
    int n, i, pos;

    printf("Enter number of persons: ");
    scanf("%d", &n);

    // نقراو معلومات كل واحد
    for (i = 0; i < n; i++)
    {
        printf("\nperson %d\n", i + 1);
        printf("first_name ");
        scanf("%s", tab[i].first_name);
        printf("first_name: ");
        scanf("%s", tab[i].last_name);
        printf("Age: ");
        scanf("%d", &tab[i].age);
    }

    printf("\nEnter position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    // ندنو البوزيسون
    for (i = n; i > pos; i--)
    {
        tab[i] = tab[i - 1];
    }

    printf("\n new person:\n");
    printf("first_name: ");
    scanf("%s", tab[pos].first_name);
    printf("last_name: ");
    scanf("%s", tab[pos].last_name);
    printf("Age: ");
    scanf("%d", &tab[pos].age);

    n++;

    printf("\n reesult:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s | %s | - %d |\n", tab[i].first_name, tab[i].last_name, tab[i].age);
    }

    return 0;
}
