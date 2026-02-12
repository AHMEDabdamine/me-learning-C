//  Algorithm: Reverse an Integer
// Start
// Input an integer n
// Initialize a variable rev = 0 (to store the reversed number)
// Repeat the following steps while n is not equal to 0:
// a. Find the last digit: digit = n % 10
// b. Add the digit to rev: rev = rev * 10 + digit
// c. Remove the last digit from n: n = n / 10
// Output the value of rev (the reversed number)

// End

#include <stdio.h>

int main()
{
    int n, n_reversed = 0, digit;
    printf("please set an interger value ,");
    scanf("%d", &n);
    while (n != 0)
    {
        digit = n % 10;
        n_reversed = n_reversed * 10 + digit;
        n = n / 10;
    }
    printf("%d", n_reversed);

    return 0;
}