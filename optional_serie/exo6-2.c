// Pattern (ii) – increasing numbers:
// Input the number of rows n.
// For i from 1 to n:
// For j from 1 to i:
// Print i without a newline.
// Print a newline.
#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}