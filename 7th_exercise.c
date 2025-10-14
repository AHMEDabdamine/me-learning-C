// write an c program that askes the user to enter there name and age and display a message saying "Hello [name], you are [age] years old!"
#include <stdio.h>

#include "colors.h"


int main() {
int age;
char name[50] ;
    printf("please enter your name: ");
    scanf("%s", name);
    printf(" \n please enter your age: ");
    scanf("%d", &age);

    green();
    printf("Hello %s you told me that you are  %d year old , hhhh what an old man  ",name,age);
    reset();
    return 0;
    }
