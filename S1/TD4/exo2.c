#include <stdio.h>

int main()
{
    int N, T[250], T1[250], T2[250], e = 0, o = 0, temp;

    printf("please enter the value for N: ");
    scanf("%d", &N);
    // نعمرو الجدول
    for (int i = 0; i < N; i++)
    {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    // ونحفظو القيمة تاعهم فكل جدول نتحقو أذا عدد زوجي ولا فردي

    for (int i = 0; i < N; i++)
    {
        if (T[i] % 2 == 0)
            T1[e++] = T[i];
        else
            T2[o++] = T[i];
    }

    for (int i = 0; i < e - 1; i++)
        for (int j = i + 1; j < e; j++)
            if (T1[j] < T1[i])
            {
                temp = T1[i];
                T1[i] = T1[j];
                T1[j] = temp;
            }

    for (int i = 0; i < o - 1; i++)
        for (int j = i + 1; j < o; j++)
            if (T2[j] < T2[i])
            {
                temp = T2[i];
                T2[i] = T2[j];
                T2[j] = temp;
            }

    printf("\n even numbers T1: ");
    for (int i = 0; i < e; i++)
        printf("%d ", T1[i]);

    printf("\n   odd numbers (T2); ");
    for (int i = 0; i < o; i++)
        printf("%d ", T2[i]);

    return 0;
}

// Algorithme Eclater_Trier
// Variables
//     T : tableau d’entiers
//     T1, T2 : tableaux d’entiers
//     N, i, p, q, tmp : entier
// Début
//     Lire N
//     Pour i ← 1 à N faire
//         Lire T[i]
//     FinPour

//     p ← 0
//     q ← 0

//     Pour i ← 1 à N faire
//         Si T[i] mod 2 = 0 Alors
//             p ← p + 1
//             T1[p] ← T[i]
//         Sinon
//             q ← q + 1
//             T2[q] ← T[i]
//         FinSi
//     FinPour

//     // Tri du tableau T1 (tri simple)
//     Pour i ← 1 à p-1 faire
//         Pour j ← i+1 à p faire
//             Si T1[j] < T1[i] Alors
//                 tmp ← T1[i]
//                 T1[i] ← T1[j]
//                 T1[j] ← tmp
//             FinSi
//         FinPour
//     FinPour

//     // Tri du tableau T2
//     Pour i ← 1 à q-1 faire
//         Pour j ← i+1 à q faire
//             Si T2[j] < T2[i] Alors
//                 tmp ← T2[i]
//                 T2[i] ← T2[j]
//                 T2[j] ← tmp
