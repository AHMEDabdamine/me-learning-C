#include <stdio.h>

int main()
{

    //     Start with result =1  Repeat for every number from 1 to the number entered
    // Mltiply result by that number
    // Whe n the loop ends result will contain the fact orial
    unsigned long num, fact = 1;
    printf("please set enter a number : ");
    scanf("%llu", &num);
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("the factorial of %d is %llu ", num, fact);

    return 0;
}