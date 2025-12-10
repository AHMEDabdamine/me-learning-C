// Start
// Input the number n from the user.
// Initialize original = n and reversed = 0.
// While n is not 0:
// Extract the last digit: digit = n % 10
// Append it to reversed: reversed = reversed * 10 + digit
// Remove the last digit from n: n = n / 10
// Compare reversed with original:
// If reversed == original, then the number is a palindrome
// Else, it is not a palindrome
// End
#include <stdio.h>

int main()
{
    int n, n_reversed = 0, digit, original;
    printf("please set an interger value ,");
    scanf("%d", &n);

    original = n;
    while (n != 0)
    {
        digit = n % 10;
        n_reversed = n_reversed * 10 + digit;
        n = n / 10;
    }
    if (n_reversed == original)
    {
        printf("this number is a palindrom");
    }
    else
    {
        printf("this numbrer is not a palindrom ");
    }

    return 0;
}