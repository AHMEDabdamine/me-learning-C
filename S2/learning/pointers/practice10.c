#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000];

    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}