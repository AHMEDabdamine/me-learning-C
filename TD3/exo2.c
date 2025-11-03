#include <stdio.h>

int main()
{

    //     Start with result =1  Repeat for every number from 1 to the number entered
    // Mltiply result by that number
    // Whe n the loop ends result will contain the fact orial
    int num;
    int fact = 1;
    printf("please set enter a number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("the factorial of %d is %d ", num, fact);

    return 0;
}