#include <stdio.h>
#include <string.h>

int main()
{
    char CH[100];
    int p, n, len, i;
    printf("please inter a word or a phrase :");

    scanf("%s", CH);
    printf("please inter how many letter you want to delete and the position you want to start from:");

    scanf("%d %d", &p, &n);

    len = strlen(CH);
    for (i = p; i <= len - n; i++)
    {
        CH[i] = CH[i + n];
    }

    printf("%s\n", CH);
    return 0;
}
