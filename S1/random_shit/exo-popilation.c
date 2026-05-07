#include <stdio.h>

int main()
{
    double bouira = 1000000;
    double alger = 500000;
    int year = 0;

    while (alger <= bouira)
    {
        bouira = bouira + 50000;
        alger = alger * 1.08;
        year++;
    }

    printf("We need %d years for alger to pass bouria.\n", year);

    return 0;
}
