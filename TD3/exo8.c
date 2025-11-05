#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, is_prime = 1;
    printf("Please enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        is_prime = 0;
    }
    else if (n > 2)
    {
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime)
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);

    return 0;
}
// 1. Declare variables (n, i, is_prime)
// 2. Read the number n
// 3. Initialize is_prime = 1 (true)
// 4. If n ≤ 1: is_prime = 0
// 5. Else if n > 2:
//    - For i from 2 to √n:
//      * If n is divisible b   y i (n % i == 0):
//        - is_prime = 0
//        - Break out of loop
// 6. Display the result