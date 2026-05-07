#include <stdio.h>

int main()
{
    int month;
    printf("Please enter the desired month value (1–12): ");
    scanf("%d", &month);

    switch (month)
    {
    case 12:
    case 1:
    case 2:
        printf("YAY! It's winter \n");
        break;

    case 3:
    case 4:
    case 5:
        printf("YEAHHH, it's spring \n");
        break;

    case 6:
    case 7:
    case 8:
        printf("Boooo, it's summer \n");
        break;

    case 9:
    case 10:
    case 11:
        printf("It's autumn \n");
        break;

    default:
        printf("The value you entered is not a valid month!\n");
        break;
    }

    return 0;
}
