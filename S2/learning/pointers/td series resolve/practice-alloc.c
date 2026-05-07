#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;

    printf("please enter how many grades you have ");
    scanf("%d", &n);

    int *grades = malloc(n * sizeof(int));
    if (grades == NULL)
    {
        printf("failed to allocate mem ");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("please enter the grade # %d", i + 1);

        scanf("%d", &grades[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf(" %d", grades[i]);
    }

    free(grades);
    grades = NULL;

    return 0;
}