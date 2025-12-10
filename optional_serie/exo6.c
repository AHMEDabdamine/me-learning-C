// Pattern (i) – decreasing stars:
// Input the number of rows n.
// For i from n down to 1:
// For j from 1 to i:
// Print * without a newline.
// Print a newline.
#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}