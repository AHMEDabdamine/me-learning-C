// "The Wilaya of Mila wants to automate the management of its municipalities and has entrusted you
// with this task. For this purpose, each municipality will be identified by its municipality number,
// name, creation date (Day, Month, and Year), surface area, and population.
// 1) Write the necessary data structures to define a municipality and a structure for managing 50
// municipalities.
// 2) Write a C++ program that performs the following tasks:
// a) Input information for n municipalities into the array.
// b) Display municipalities with a population less than a specified number (Nbr), and their creation
// dates do not exceed 15 years

#include <stdio.h>
struct date
{
    int dd, mm, yyyy;
};
struct baladia
{
    int number, population;
    char name[50];
    struct date creation_date;
    float area;
};

int main()
{
    int n, nbr;
    struct baladia baladiat[50];
    printf("please enter how many baladiay you need: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("pleaset enter the baladia n° %d infos (number name date : DD/MM/YYYY population area)", i + 1);
        scanf("%d %s %d/%d/%d %d %f", &baladiat[i].number,
              baladiat[i].name,
              &baladiat[i].creation_date.dd,
              &baladiat[i].creation_date.mm,
              &baladiat[i].creation_date.yyyy,
              &baladiat[i].population,
              &baladiat[i].area);
    }

    printf("please enter the population limit ");
    scanf("%d", &nbr);

    // printing them
    for (int i = 0; i < n; i++)
    {
        if (baladiat[i].population < nbr && 2026 - baladiat[i].creation_date.yyyy < 15)
        {

            printf(" \n %d %s %d/%d/%d %d %f",
                   baladiat[i].number,
                   baladiat[i].name,
                   baladiat[i].creation_date.dd,
                   baladiat[i].creation_date.mm,
                   baladiat[i].creation_date.yyyy,
                   baladiat[i].population,
                   baladiat[i].area);
            printf("\n-----------------------------------");
        }
    }

    return 0;
}