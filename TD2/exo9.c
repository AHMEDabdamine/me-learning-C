#include <stdio.h>

int main()
{
    int month;
    printf("please inter the desired mounth value : ");
    scanf("%d", &month);
    if (month > 12)

    {
        printf("the value you entered in not a valid month you stupid ");
    }
    else if (month == 12 || month == 1 || month == 2)
    {
        printf(" YAY ! its winter ");
    }
    else if (month == 3 || month == 4 || month == 5)
    {
        printf("YEAAAAAAhn, its spring");
    }
    else if (month == 6 || month == 7 || month == 8)
    {
        printf("booooo , its summer");
    }
    else
    {
        printf("its autumn ! ");
    }

    return 0;
}