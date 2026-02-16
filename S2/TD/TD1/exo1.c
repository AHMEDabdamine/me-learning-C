#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct
{
    float x, y;
} point;
int main(void)
{
    point A, B;
    float dis;
    printf("please set the coordinates for the point A : \n");
    scanf("%f %f", &A.x, &A.y);
    printf("please set the coordinates for the point B :\n");
    scanf("%f %f", &B.x, &B.y);
    dis = sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
    printf(" the distance betweeen A and b is = %f ", dis);

    return 0;
}
