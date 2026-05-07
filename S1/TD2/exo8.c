#include <stdio.h>

int main()
{
    int age, Sub_Fee;

    printf("please enter your age and subscription amount ; \n ");
    printf("\n age =");
    scanf("%d", &age);
    printf(" \n subscription = ");
    scanf("%d", &Sub_Fee);
    printf(" your age is = %d and you pay =  %d DZD", age, Sub_Fee);
    if (Sub_Fee < 5000 && age < 12)
    {
        printf(" \n sorry but you cant access because both your age and the subscription fee is under the requirments ");
    }
    else if (age < 12)
    {
        printf("\n sorry but you cant acces your age is under 12 ");
    }
    else if (Sub_Fee < 5000)
    {
        printf("\n sorry but you cant acces your subscription fee is less than 5000 DZD");
    }
    else
    {
        printf("\n acces granted have a greate day :)");
    }

    return 0;
}
