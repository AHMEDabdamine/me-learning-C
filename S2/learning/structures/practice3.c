// Exercise 3 — Nested Structures
// Create a structure Date (day, month, year). Then create a structure Employee with fields: name, salary (float), and hireDate (of type Date). Write a program that:

// Reads data for 3 employees
// Displays all their information
// Finds the employee with the highest salary
#include <stdio.h>

struct date
{
    int dd, mm, yyyy;
};
struct employee
{
    char name[50];
    float salary;
    struct date hd;
};
int main()
{
    struct employee employees[50];
    int n, maxs = 0;

    printf("please enter the employees count ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("please set the inforamtion for the employee n°%d :", i);
        scanf("%s", employees[i].name);
        scanf("%f", &employees[i].salary);
        scanf("%d/%d/%d", &employees[i].hd.dd, &employees[i].hd.mm, &employees[i].hd.yyyy);
    }
    for (int i = 0; i < n; i++)
    {
        printf("employee n ° %d info \n", i);
        printf("%s \n", employees[i].name);
        printf("%f \n", employees[i].salary);
        printf("%d/%d/%d \n ", employees[i].hd.dd, employees[i].hd.mm, employees[i].hd.yyyy);
        printf("\n ----------------------------");
    }
    for (int i = 1; i < n; i++)
    {
        if (employees[i].salary > employees[maxs].salary)
        {
            maxs = i;
        }
    }
    printf(" \n the employee with the highest salary is :");
    printf("employee n ° %d info \n", maxs);
    printf("%s \n", employees[maxs].name);
    printf("%f \n", employees[maxs].salary);
    printf("%d/%d/%d \n ", employees[maxs].hd.dd, employees[maxs].hd.mm, employees[maxs].hd.yyyy);
    return 0;
}