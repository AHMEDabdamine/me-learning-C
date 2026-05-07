// Algorithme : Compter les successions (V1 → V2) dans un vecteur
// Variables :
// T : tableau d'entiers
// N : entier
// V1, V2 : entiers
// i : entier
// compteur : entier
// Début :
// Lire N
// Pour i de 1 à N
//   Lire T[i]
// Lire V1, Lire V2
// compteur ← 0
// Pour i de 1 à N-1 faire
//   Si T[i] = V1 et T[i+1] = V2 alors
//     compteur ← compteur + 1
//   FinSi
// FinPour
// Afficher compteur
// Fin
#include <stdio.h>

int main()
{
    int T[200], N, V1, V2, count = 0;

    printf("please enter the value for N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    printf("enter the desired value for V1: ");
    scanf("%d", &V1);

    printf("enter the desired value for V2: ");
    scanf("%d", &V2);

    for (int i = 0; i < N - 1; i++)
    {
        if (T[i] == V1 && T[i + 1] == V2)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
