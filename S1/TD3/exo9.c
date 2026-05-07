#include <stdio.h>

int main()
{
    const int correct_pin = 5454;
    const int max_att = 3;
    int pin;
    int attempts = 0;

    printf("please enter your pin (you have %d attempts):\n", max_att);

    while (attempts < max_att)
    {
        printf("Attempt %d: ", attempts + 1);
        scanf("%d", &pin);

        if (pin == correct_pin)
        {
            printf("The code is correct. Access granted.\n");
            return 0;
        }
        else
        {
            attempts++;
            if (attempts < max_att)
                printf("Wrong PIN. Try again.\n");
        }
    }

    printf("You have exceeded the maximum number of attempts. Access denied.\n");

    return 0;
}
