// Write a C program that:
// Reads N integers into a vector.
// Calculates the sum.
// Finds the maximum and its position.
#include <stdio.h>

int main()
{
    int T[100], N, sum = 0, max = T[0];
    printf("please enter a Value For N:");
    scanf("%d", &N);
    // filling up the array
    for (int i = 0; i < N; i++)
    {
        printf("\n please fill the column n° %d :", i);
        scanf("%d", &T[i]);
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d,", T[i]);
    }
    for (int i = 0; i < N; i++)
    {
        sum = sum + T[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (T[i] > max)
        {
            max = T[i];
        }
    }
    printf("\n  the sum is : %d  and the maximuim is : %d", sum, max);

    return 0;
}