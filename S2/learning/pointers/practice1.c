#include <stdio.h>

int main()
{
    //     Exercice 1.1
    // Déclarez un entier a = 10 et un pointeur p qui pointe sur a. Affichez :

    // La valeur de a via le pointeur
    // L'adresse de a via le pointeur
    // L'adresse du pointeur lui-même
    int a = 10;
    int *pA = &a;

    printf("%d\n", *pA);
    printf("%p\n", &a);
    printf("%p\n", &pA);

    return 0;
}