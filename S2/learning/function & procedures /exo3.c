// Ex C. Write a function somme(a, b, c) that returns the sum of three integers.
// Then write a function moyenne(a, b, c) that calls somme to compute the average. Don't repeat the addition logic.
#include <stdio.h>
int sum(int a, int b, int c)
{
    return a + b + c;
}
float evg(int a, int b, int c)
{
    float avg = 0;
    avg = sum(a, b, c) / 3;

    return avg;
}
int main()
{
    int x, y, z;
    float avg = 0;
    printf("please give the  x y z values\n");
    scanf("%d %d %d", &x, &y, &z);
    avg = evg(x, y, z);
    printf("%.2f", avg);

    return 0;
}