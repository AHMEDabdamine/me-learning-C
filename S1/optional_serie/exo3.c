// Start
// Input an integer n
// Initialize sum = 0
// Repeat the following steps using a for loop while n is not equal to 0:
// a. Find the last digit: digit = n % 10
// b. Add it to sum: sum = sum + digit
// c. Remove the last digit: n = n / 10
// End for loop
// Output the value of sum (the sum of digits)
// End
#include <stdio.h>

int main()
{
    int n, sum = 0, number;
    printf("please enter a value for n :");
    scanf("%d", &n);
    for (; n != 0; n = n / 10)
    {
        number = n % 10;
        sum = sum + number;
    }

    printf("%d", sum);

    return 0;
}