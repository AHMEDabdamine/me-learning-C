#include <stdio.h>
struct students
{
    char firstname[50], lastname[50];
    float note;
};

int main()
{
    struct students student[100];
    int n;
    printf("please set how many students you need :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("please set the information for the student n° %d (format : firstname lastname note):", i + 1);
        scanf("%s %s %f", student[i].firstname, student[i].lastname, &student[i].note);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s %s %.1f \n", student[i].firstname, student[i].lastname, student[i].note);
    }
    printf("------------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        if (student[i].note >= 10)
        {
            printf("%s %s %.1f \n", student[i].firstname, student[i].lastname, student[i].note);
        }
    }

    return 0;
}
