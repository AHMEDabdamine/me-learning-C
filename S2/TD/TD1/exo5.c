#include <stdio.h>
#include <math.h>

struct circle
{
    float xc, yc;
    float r;
};

int main()
{
    struct circle tab[100];
    int n, i;
    float x, y, distance;

    printf("enter number of circles: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nenter circle n° %d center coordinates (x y): \n", i + 1);
        scanf("%f %f", &tab[i].xc, &tab[i].yc);
        printf("enter its radius: ");
        scanf("%f", &tab[i].r);
    }

    printf("\nenter point coordinates (x y): ");
    scanf("%f %f", &x, &y);

    printf("\ncircles containing the point:\n");
    for (i = 0; i < n; i++)
    {
        distance = sqrt((x - tab[i].xc) * (x - tab[i].xc) +
                        (y - tab[i].yc) * (y - tab[i].yc));

        if (distance <= tab[i].r)
        {
            printf("Circle %d contains the point\n", i + 1);
        }
    }

    return 0;
}