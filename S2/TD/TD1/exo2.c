#include <stdio.h>

typedef struct
{
    char firstname[100];
    char lastname[100];
    float grade;
} students;

int main(void)
{
    students T[100];
    int i, n;
    int *p1 = &n;

    do
    {
        printf("give the students count :");
        scanf("%d", p1);
    } while (n <= 0 || n > 100);

    for (i = 0; i < n; i++)
    {
        printf("enter the student's n° %d first name ", i + 1);
        scanf("%s", T[i].firstname);
        printf("enter the student's n° %d last name ", i + 1);
        scanf("%s", T[i].lastname);
        printf("enter the student's n° %d grade ", i + 1);
        scanf("%f", &T[i].grade);
    }

    printf("Students has a note greater or equal than 10 are :\n");
    for (i = 0; i < n; i++)
    {
        if (T[i].grade >= 10)
        {
            printf(" - %s %s %f\n", T[i].firstname, T[i].lastname, T[i].grade);
        }
    }

    return 0;
}
