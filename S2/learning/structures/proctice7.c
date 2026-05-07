#include <stdio.h>
struct date
{
    int dd, mm, yyyy;
};
struct chifa_card
{
    char FNA[50];
    int NCS, RP;
    struct date DNA;
};
struct med
{
    char name[100];
    int price, qte;
};

int main()
{
    struct chifa_card chifa_cards;
    struct med ord[100];
    int medscount = 0, total_tp = 0, sum = 0, refund = 0;

    printf("please enter the chifa card info : ");
    printf("\n social security number");
    scanf("%d", &chifa_cards.NCS);
    printf("\n full name ");
    scanf("%s", chifa_cards.FNA);
    printf("\n birth date  ");
    scanf("%d/%d/%d", &chifa_cards.DNA.dd, &chifa_cards.DNA.mm, &chifa_cards.DNA.yyyy);
    printf("\n refund persentage ");
    scanf("%d", &chifa_cards.RP);
    // prining infto
    printf("\n--- Chifa Card Information ---\n");
    printf("Social Security Number: %d\n", chifa_cards.NCS);
    printf("Full Name: %s\n", chifa_cards.FNA);
    printf("Birth Date: %d/%d/%d\n", chifa_cards.DNA.dd, chifa_cards.DNA.mm, chifa_cards.DNA.yyyy);
    printf("Refund Percentage: %d%%\n", chifa_cards.RP);

    // meds order
    printf("please set how many meds are there");
    scanf("%d", &medscount);

    for (int i = 0; i < medscount; i++)
    {
        printf("med n° %d name: ", i + 1);
        scanf("%s", ord[i].name);

        printf("med n° %d price: ", i + 1);
        scanf("%d", &ord[i].price);

        printf("med n° %d quantity: ", i + 1);
        scanf("%d", &ord[i].qte);
    }
    for (int i = 0; i < medscount; i++)
    {
        sum = sum + ord[i].price * ord[i].qte;
    }
    refund = sum * (chifa_cards.RP / 100);
    total_tp = sum - refund;
    printf("%d", total_tp);

    return 0;
}