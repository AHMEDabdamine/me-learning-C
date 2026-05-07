#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char word[100];
    int len;
    bool isPalindrome = true;
    scanf("%s", word);
    len = strlen(word);
    for (int i = 0; i < len / 2; i++)
    {
        if (word[i] != word[len - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
        printf("palindrome\n");
    else
        printf("not a palindrome\n");
    return 0;
}
