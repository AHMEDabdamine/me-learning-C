// Début
//     Lire N, M
//     Déclarer matrice A[N][M]
//     Pour i de 0 à N-1
//         Pour j de 0 à M-1
//             Lire A[i][j]
//         FinPour
//     FinPour
//     Déclarer Somme[M]
//     Pour j de 0 à M-1
//         Somme[j] ← 0
//         Pour i de 0 à N-1
//             Somme[j] ← Somme[j] + A[i][j]
//         FinPour
//     FinPour
//     Jmin ← 0
//     Jmax ← 0
//     Pour j de 1 à M-1
//         Si Somme[j] < Somme[Jmin] alors
//             Jmin ← j
//         FinSi
//         Si Somme[j] > Somme[Jmax] alors
//             Jmax ← j
//         FinSi
//     FinPour
//     Si Jmin > Jmax alors
//         Pour i de 0 à N-1
//             Temp ← A[i][Jmin]
//             A[i][Jmin] ← A[i][Jmax]
//             A[i][Jmax] ← Temp
//         FinPour
//     FinSi
// Fin
#include <stdio.h>
int main()
{
    int n, m, A[20][30], sum[30], jmin = 0, jmax = 0, temp, i = 0, j = 0;
    printf("enter the n and m vlaues {n m} ");
    scanf("%d %d", &n, &m);
    printf("please fill the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n matrix A:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    for (j = 0; j < m; j++)
    {
        sum[j] = 0;
        for (i = 0; i < n; i++)
        {
            sum[j] = sum[j] + A[i][j];
        }
    }
    printf("\n columns sum :\n");
    for (j = 0; j < m; j++)
    {
        printf(" %d: %d\n", j, sum[j]);
    }
    for (j = 0; j < m; j++)
    {
        if (sum[j] < sum[jmin])
            jmin = j;
        if (sum[j] > sum[jmax])
            jmax = j;
    }
    printf("\n minimal position : %d sum = %d \n", jmin, sum[jmin]);
    printf("maximuim position: %d sum = %d \n", jmax, sum[jmax]);
    if (jmin > jmax)
    {
        printf("\n column swapiing%d et %d\n", jmin, jmax);
        for (i = 0; i < n; i++)
        {
            temp = A[i][jmin];
            A[i][jmin] = A[i][jmax];
            A[i][jmax] = temp;
        }
        printf("\n after swapping :\n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}