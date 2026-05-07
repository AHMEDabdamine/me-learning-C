// Ex B. Write a function estPair(n) that returns 1 if n is even, 0 otherwise.
// Write a main() that reads 5 integers and prints how many are even.
#include <stdio.h>
int is_even(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};
int main()
{
    int pairs = 0, a, b, c, d, e;
    printf("please enter fire integers");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    pairs = pairs + is_even(a);
    pairs = pairs + is_even(b);
    pairs = pairs + is_even(c);
    pairs = pairs + is_even(d);
    pairs = pairs + is_even(e);
    printf("there are %d pair numbers ", pairs);

    return 0;
}