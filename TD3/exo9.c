    #include <stdio.h>

    int main()
    {
        int pin = 5454, ;
        printf("please set the code (notice : you have only 3 times ) :");
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &pin);
            if (pin == 5454)
            {
                printf("the code is correct access granted ");
            }
            else
            {
                printf("try again : ");
                scanf("%d", &pin);
            }
        }

        return 0;
    }