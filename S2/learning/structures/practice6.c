#include <stdio.h>
struct person
{
    char firstname[50], lastname[50];
    int age;
};

int main()
{
    struct person person[100];
    int n, pos = 0;
    printf("please enter how many people you need : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\n please enter the info for the person n° %d : ", i + 1);
        scanf("%s %s %d", person[i].firstname, person[i].lastname, &person[i].age);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s| %s |%d \n ", person[i].firstname, person[i].lastname, person[i].age);
    }
    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    for (int i = n; i > pos - 1; i--)
    {
        person[i] = person[i - 1];
    }

    printf("\n please enter the info for the person added : ");
    scanf("%s %s %d", person[pos].firstname, person[pos].lastname, &person[pos].age);
    n++;
    for (int i = 0; i < n; i++)
    {
        printf("%s| %s |%d \n ", person[i].firstname, person[i].lastname, person[i].age);
    }

    return 0;
}