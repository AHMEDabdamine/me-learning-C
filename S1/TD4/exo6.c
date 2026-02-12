#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[500];
    int a = 0, e = 0, i_ = 0, o = 0, u = 0;

    printf("enter a sentence ");
    fgets(s, sizeof(s), stdin);

    for (int k = 0; s[k] != '\0'; k++)
    {
        char c = tolower(s[k]);
        if (c == 'a')
            a = 1;
        if (c == 'e')
            e = 1;
        if (c == 'i')
            i_ = 1;
        if (c == 'o')
            o = 1;
        if (c == 'u')
            u = 1;
        //             switch (c) {
        //     case 'a': a = 1; break;
        //     case 'e': e = 1; break;
        //     case 'i': i_ = 1; break;
        //     case 'o': o = 1; break;
        //     case 'u': u = 1; break;
        // }
    }

    if (a && e && i_ && o && u)
        printf("The sentence contains all vowels.\n");
    else
        printf("The sentence does NOT contain all vowels.\n");

    return 0;
}
