#include <stdio.h>

typedef struct
{
    float heigh, width;
} Rectangle;

int main()
{
    Rectangle rec;
    float area, perimeter;

    printf("please inter the vlaues for the Rectangle :");
    printf("height= ");
    scanf("%f", &rec.heigh);

    printf("\n width = ");
    scanf("%f", &rec.width);
    area = rec.heigh * rec.width;
    perimeter = (rec.heigh + rec.width) * 2;
    printf(" area = %.2f and  perimeter = %.2f", area, perimeter);

    return 0;
}