#include <stdio.h>
#include "colors.h"
#include <string.h>
int main()
{
    // veriables
    int code, Qte, total;
    char type[50];
    yellow();
    printf("================= MENU ===================\n");
    printf("| [1] - Essence sans plomb - 65 DA/litre |\n");
    printf("| [2] - Gasoil - 55 DA/litre             |\n");
    printf("| [3] - GPL (gaz) - 40 DA/litre          |\n");
    printf("==========================================\n");
    reset();
    printf("\n please enter the code of the desired fuel type (ex : 1): ");
    scanf("%d", &code);
    printf("\n please set how many liters you want: ");
    scanf("%d", &Qte);
    // ------------- اللوجيك
    if (code == 1)
    {
        strcpy(type, "Essence sans plomb");
        total = Qte * 65;
        printf("your total of %d liters from %s is : %d DA", Qte, type, total);
    }
    else if (code == 2)
    {
        strcpy(type, "Gasoil");
        total = Qte * 55;
        printf("your total of %d liters from %s is : %d DA", Qte, type, total);
    }
    else if (code == 3)
    {
        strcpy(type, "GPL (gaz)");
        total = Qte * 40;
        printf("your total of %d liters from %s is : %d DA", Qte, type, total);
    }
    else
    {
        red();
        printf("Invalid code ,  please try again with 1 ,2 or 3 ");
        reset();
    }
    return 0;
}
