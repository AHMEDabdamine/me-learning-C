#include <stdio.h>

int main()
{
    int num, pos, max, count;

    while (1)
    {
        printf("Enter a number (0 to stop):  ");
        scanf("%d", &num);

        if (num == 0)
            break;

        count++;

        if (count == 1)
        {
            max = num;
            pos = 1;
        }
        else if (num > max)
        {
            max = num;
            pos = count;
        }
    }

    if (count == 0)
        printf("No numbers were entered.\n");
    else
    {
        printf("\nThe largest number is %d \n", max);
        printf("It was entered at position %d ", pos);
    }
    return 0;
}
// Use a loop that continues until num == 0.

// For each number entered
// Increase the counter
// If its the first number initialize max and pos.
// If its greater than the current max, update both.
// When the user enters 0 stop the loop
// Print the largest number and its position