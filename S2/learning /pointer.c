#include <stdio.h>

int main()
{
    // a pointer is a variable  like prefrence that holds a memory address to another veriable

    int a = 54775807;
    int *pA = &a;

    printf("the mem address of a is %p", &a);

    printf("the value of a is : %d", a);
    printf("the value of pA is : %d ", *pA);

    return 0;
}