/*ex 06*/
#include <stdio.h>

int main()
{
    // declare variables
    int a, b, c;
    // ask the user to enter there values
    printf("please set the values for a b and c (ex :1 2 3 ) ");
    scanf("%d %d %d", &a, &b, &c);
    // check if the entered values are valid or not " The sum of the lengths of any two sides must be greater than the third side."
    // مجموع أي ضلعين في مثلث يجب أن يكون أكبر من الضلع الثالث
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
        { // 5 5 5

            /* المثلث متقايس الأضلاع */
            printf("the triangle is Equilateral ");
        }
        else if (a == b || a == c || b == c)
        {
            /* متساوي الساقين  */
            // 4 6 6
            printf("the triangle is Isosceles ");
        }
        else
        {
            // مثلث كيفي    3 4 5
            printf("the triangle is Scalene");
        }
    }
    else
    {
        // 1 2 3
        printf("the entered values does not repersent a triangle ");
    }

    return 0;
}
