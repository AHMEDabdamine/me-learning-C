#include <stdio.h>
#include <string.h>
#include "colors.h" // your color functions header

int main()
{
    int code, Qte, total;
    char type[50];

    yellow();
    printf("================= MENU ===================\n");
    printf("| [1] - Essence sans plomb - 65 DA/litre |\n");
    printf("| [2] - Gasoil - 55 DA/litre             |\n");
    printf("| [3] - GPL (gaz) - 40 DA/litre          |\n");
    printf("==========================================\n");
    reset();

    printf("\nPlease enter the code of the desired fuel type (ex: 1): ");
    scanf("%d", &code);
    printf("Please set how many liters you want: ");
    scanf("%d", &Qte);

    switch (code)
    {
    case 1:
        strcpy(type, "Essence sans plomb");
        total = Qte * 65;
        printf("Your total of %d liters of %s is: %d DA\n", Qte, type, total);
        break;

    case 2:
        strcpy(type, "Gasoil");
        total = Qte * 55;
        printf("Your total of %d liters of %s is: %d DA\n", Qte, type, total);
        break;

    case 3:
        strcpy(type, "GPL (gaz)");
        total = Qte * 40;
        printf("Your total of %d liters of %s is: %d DA\n", Qte, type, total);
        break;

    default:
        red();
        printf("Invalid code. Please try again with 1, 2, or 3.\n");
        reset();
        break;
    }

    return 0;
}
