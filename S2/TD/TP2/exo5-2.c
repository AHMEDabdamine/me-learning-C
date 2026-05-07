#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *A, *B;
    int N, M, i;
    int *p;

    printf("enter size of a: ");
    scanf("%d", &N);

    printf("Enter size of b ");
    scanf("%d", &M);

    A = (int *)malloc(N * sizeof(int));
    B = (int *)malloc(M * sizeof(int));

    if (A == NULL || B == NULL)
    {
        printf("memory allocation failed");
        return 1;
    }

    printf("ennter elements of A:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter elements of B:\n");
    for (i = 0; i < M; i++)
    {
        scanf("%d", &B[i]);
    }

    A = (int *)realloc(A, (N + M) * sizeof(int));
    if (A == NULL)
    {
        printf("failed to  reallocate mem\n");
        return 1;
    }

    p = A + N;

    for (i = 0; i < M; i++)
    {
        *(p + i) = B[i];
    }

    printf("Result:");
    for (i = 0; i < N + M; i++)
    {
        printf("%d ", A[i]);
    }
    free(A);
    free(B);

    return 0;
}