#include <stdio.h>
#include <string.h>
int main()
{
    int T, Ts, i, j;
    char CH[100], SH[100];
    bool SHexiste = 0;
    printf("entrez la chaîne ch: ");
    scanf("%s", CH);
    printf("entrez la sous chaîne sh : ");
    scanf("%s", SH);
    T = strlen(CH);
    Ts = strlen(SH);
    for (i = 0; i <= T - Ts; i++)
    {
        j = 0;
        while (j < Ts && CH[i + j] == SH[j])
        {
            j++;
        }
        if (j == Ts)
        {
            SHexiste = 1;
            break;
        }
    }
    if (SHexiste)
    {
        printf("la sous chaîne existe dans la chaîne à la position %d.", i);
    }
    else
    {
        printf("\nla sous chaîne n'existe pas dans la chaîne.\n");
    }
    return 0;
}