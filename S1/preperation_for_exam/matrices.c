#include <stdio.h>

int main()
{
    int T[3][3];
    printf("please each student's note \n");
    // filling the table
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\n please enter the student n° %d :", i + 1);
            scanf("%d", &T[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d|", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}