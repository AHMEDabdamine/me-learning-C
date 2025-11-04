#include <stdio.h>

int main()
{
    float price, sum = 0;

    while (1)
    {
        printf("Enter the price of the item  and tyoe '0' to stop:\n ");
        scanf("%f", &price);

        if (price == 0)
            break;

        sum = sum + price;
    }

    printf("The total sum of the items is: %f DA ", sum);

    return 0;
}
