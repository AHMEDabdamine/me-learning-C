// Exercise 2 — Array of Structures
// Create a structure Product with fields: name (string), price (float), quantity (int). Write a program that:

// Reads info for 5 products
// Displays all products
// Finds and displays the most expensive produ
#include <stdio.h>
struct product
{
    char name[20];
    float price;
    int qte;
};
int main()
{
    struct product products[50];
    int n, max;
    printf("please enter how many products you need: ");
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("please the info's for the prduct n ° %d", i + 1);
        scanf("%s", products[i].name);
        scanf("%f", &products[i].price);
        scanf("%d", &products[i].qte);
    }
    for (int i = 0; i < n; i++)
    {
        printf("products %d:\n", i + 1);
        printf("  name      : %s\n", products[i].name);
        printf("  price     : %f\n", products[i].price);
        printf("  Qte       : %d\n", products[i].qte);
        printf("------------------\n");
    }
    max = 0;
    for (int i = 0; i < n; i++)
    {
        if (products[i].price > products[max].price)
        {
            max = i;
        }
    }
    printf("%d", max);
    printf("the product n° %d is the biggest \n", max + 1);
    printf("  name      : %s\n", products[max].name);
    printf("  price     : %f\n", products[max].price);
    printf("  Qte       : %d\n", products[max].qte);

    return 0;
}