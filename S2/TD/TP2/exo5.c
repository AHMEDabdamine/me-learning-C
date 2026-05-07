#include <stdio.h>

int main()
{
    int A[100], B[100];
    int N, M, i;
    int *p;

    printf("enter size of A");
    scanf("%d", &N);

    printf("dnter size of b: ");
    scanf("%d", &M);

    printf("enter elements of A:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("enter elements of B:\n");

    for (int i = 0; i < M; i++)
    {

        scanf("%d", &B[i]);
    }

    p = A + N;

    for (i = 0; i < M; i++)
    {
        *(p + i) = B[i];
    }

    printf("result:\n");
    for (i = 0; i < N + M; i++)
        printf("%d ", A[i]);

    return 0;
}