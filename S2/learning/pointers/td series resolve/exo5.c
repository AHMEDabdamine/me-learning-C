#include <stdio.h>

int main()
{
    int n, m, A[100], B[100];
    int *p;
    printf("please enter the size of table A:");
    scanf("%d", &n);

    printf("please enter the size of table B:");
    scanf("%d", &m);
    // fill table a
    for (int i = 0; i < n; i++)
    {
        printf("please enter the value of A[%d]\n", i + 1);
        scanf("%d", &A[i]);
    }
    // fill table B
    for (int i = 0; i < m; i++)
    {
        printf("please enter the value of B[%d]\n", i + 1);
        scanf("%d", &B[i]);
    }
    p = A + n;
    for (int i = 0; i < m; i++)
    {

        *(p + i) = B[i];
    }
    printf("new arr :\n");
    for (int i = 0; i < n + m; i++)
    {
        printf("|%d|", A[i]);
    }

    return 0;
}