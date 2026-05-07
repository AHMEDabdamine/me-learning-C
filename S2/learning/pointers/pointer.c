#include <stdio.h>

int main()
{
    // a pointer is a variable  like prefrence that holds a memory address to another veriable

    int a = 54775807;
    int *pA = &a;

    printf("%p", &a);
    printf("\n %p", pA);
    // vlaue where the pointer is pointing at
    printf("\n%d", *pA);
    printf("\nsize : %u", sizeof(int));

    pA++;
    printf("\n%d", *pA);
    printf("\n %p", pA);
    // in resume a pointer a variable that stores the adresses of other variables , we have a veriable called a = 10 if we made a pointet p pointng at it we got *p = &a (address of a) ,if the adress of a is xf0990 when we print out the pointer using the foramt specifier %p we will see xf0990 and also we can print the values that is stored in that adress using pointers by typing the format specifier for the variable like %d but in the varaiables we put out pointer as the variable *pA so pA is pointing at the adress of  the a variable .

    return 0;
}