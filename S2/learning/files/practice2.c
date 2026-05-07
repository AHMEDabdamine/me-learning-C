#include <stdio.h>

int main()
{
    FILE *numbers, *average;
    int n, x;
    numbers = fopen("/home/a7med-s_pc/Desktop/me-learning-C/S2/learning/files/practice.txt", "w+b");
    if (numbers == NULL)
    {
        printf("failed to open file");
    }
    else
    {
        printf("please give us the values of n");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("give a number");
            scanf("%d", &x);
            fwrite(&x, sizeof(int), 1, numbers);
        }
        // read the file and callculate the avg
        while (!feof(numbers))
        {
            fread(&x, sizeof(int), 1, numbers);
        }
    }

    return 0;
}