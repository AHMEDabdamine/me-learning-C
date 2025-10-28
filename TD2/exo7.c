#include <stdio.h>
#include <math.h>
int main()
{
    // declare variables
    double a, b, c, x1, x2, D;
    printf("please set the values for a b and c (ex :1 2 3 ) ");
    scanf("%lf %lf %lf", &a, &b, &c);
    // check if any numbers is equat to zero
    if (a != 0)
    {
        // نستعملو %.2  باش نحددو شحال  من عدد بعد الفاصلة
        printf(" a = %.1lf b = %.1lf c = %.2lf ", a, b, c);
        D = b * b - 4 * a * c;
        printf("D = %lf", D);

        if (D > 0)

        {
            // 4 9 2

            printf("\n the equation have two solutions witch are x1 and x2");
            x1 = (-b - sqrt(D)) / (2 * a);
            x2 = (-b + sqrt(D)) / (2 * a);

            printf("\n x1 = %lf ", x1);
            printf("\n x2 = %lf  ", x2);
        }
        else if (D == 0)
        {
            // 1 2 1
            printf("the equation have one doubled solution ");
            x1 = -b / (2 * a);
            printf("\n x1 = %lf ", x1);
        }
        else if (D < 0)
        {
            // 1 2 3
            printf("the equation have no solutions");
        }
        else
        {
            printf("this is not real equation and we can't solve it ");
        }
    }
    return 0;
}
