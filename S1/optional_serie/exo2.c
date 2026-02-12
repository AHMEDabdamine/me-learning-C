// Algorithm: Count Number of Digits in an Integer

// Start

// Input an integer n

// Initialize a counter variable count = 0

// If n is 0, then set count = 1 and go to step 7

// Repeat the following steps while n is not equal to 0:
// a. Divide n by 10 → n = n / 10
// b. Increment count by 1

// End while loop

// Output the value of count (the number of digits)

// End

#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("please inter a value for n ");
    scanf("%d", &n);
    if (n == 0)
    {
        count++;
    }
    else
    {
        while (n != 0)
        {
            n = n / 10;
            count++;
        }
    }

    printf("%d", count);

    return 0;
}