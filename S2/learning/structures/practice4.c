#include <stdio.h>
#include <math.h>
struct point
{
    int x, y;
};
int main()
{
    struct point p1, p2;
    float dis;
    printf("please enter the point 1's coordinates x,y :");
    scanf("%d,%d", &p1.x, &p1.y);
    printf("please enter the point 2Nd's coordinates x,y :");
    scanf("%d,%d", &p2.x, &p2.y);

    dis = sqrt(((p1.x - p2.x) * (p1.x - p2.x)) + ((p1.y - p2.y) * (p1.y - p2.y)));
    printf(" the distance between the two point is : %.2f", dis);

    return 0;
}