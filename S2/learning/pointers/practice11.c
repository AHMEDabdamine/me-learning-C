#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *start, *end;
    char str[1000];

    printf("please type a word with no spaces :");
    scanf("%s", &str);

    start = str;
    end = str + strlen(str) - 1;

    while (start < end)
    {
        if (*start != *end)
        {
            printf("the word is not a palindrom ");
            return 1;
        }
        start++;
        end--;
    }
    printf("the word is a palindrom");

    return 0;
}