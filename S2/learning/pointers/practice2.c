// Exercice 1.3
// Déclarez deux entiers a = 4 et b = 7. En utilisant uniquement des pointeurs (pas de modification directe de a ou b), échangez leurs valeurs.
#include <stdio.h>

int main()
{
    int a = 4, b = 7;
    int *pa = &a, *pb = &b;
    printf("before swap : %d %d ", a, b);

    *pa = *pa + *pb;
    *pb = *pa - *pb;
    *pa = *pa - *pb;

    printf(" after swapping : %d %d ", *pa, *pb);

    return 0;
}