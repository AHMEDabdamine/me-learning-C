// Start
// Input the size
// N
// N of the square matrix.
// For each row
// i
// i from 0 to
// N−1
// N−1:
// For each column
// j
// j from 0 to
// N−1
// N−1:
// Input
// A[i][j]
// A[i][j] (fill the matrix).
// Initialize trace = 0
// Initialize max_diag = A[0][0] and its position (row_max, col_max) = (0,0)
// For each index
// i
// i from 0 to
// N−1
// N−1:
// Add
// A[i][i]
// A[i][i] to trace
// If
// A[i][i]>maxdiag
// A[i][i]>max
// d
// 	​
// iag:
// Update max_diag = A[i][i]
// Update (row_max, col_max) = (i, i)
// Print trace
// Print max_diag and its position (row_max, col_max)
// End
#include <stdio.h>

int main()
{
    int N, A[25][25], trace = 0, max_diag, row_max, col_max;

    printf("Enter the value for  N  ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    max_diag = A[0][0];
    row_max = col_max = 0;

    for (int i = 0; i < N; i++)
    {
        trace += A[i][i];
        if (A[i][i] > max_diag)
        {
            max_diag = A[i][i];
            row_max = col_max = i;
        }
    }

    printf("Trace of the matrix = %d\n", trace);
    printf("Maximum on main diagonal = %d at position (%d, %d)\n", max_diag, row_max, col_max);

    return 0;
}
