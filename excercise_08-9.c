// write a c program that takes two veriables from the user and print them and after that swap them and display them 
 #include <stdio.h>

#include "colors.h"

 int main() {
    int a, b; // temp 
    printf("Please enter the value of a: ");
    scanf("%d", &a);
    //-------------
    printf("Please enter the value of b: ");
    scanf("%d", &b);
    
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

/* we have two distincts solution 
first one being storing the values in a temporary place , but this require a third variable called temp 
 then  we store the one value inside of the temp then swaping the second to the first and then put back 
 the first variable in the second variable place 


1- store the a var inside the temp 
temp = a ; 
2- swap between a and b 
a = b; 
3- put a in the place of b 
b = temp ; 
4- then printing 

*/



// temp = a ;
// a = b ; 
// b = temp;
// printf("\n after swaping : a = %d and b = %d",a,b);


/* second way we use simple math to do it and it easier 
first we add the veriable toghther and store them inside a 
the goal is ex; a = 1 and b = 9
we need to sum a and b toghter and store them in a 
a = a +b 
a = 10 
then subtruct the a 
a = a - b 10-1 = 9 
then 
b = a + b = 10
 b = b-a = 10-9 = 1
brr 

*/
a = a + b;
b = a - b; 
a = a - b; 

printf("After swapping: a = %d, b = %d\n", a, b);
     return 0;
     } 