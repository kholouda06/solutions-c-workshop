#include <stdio.h>
int main()
{
    int a, b;
    printf("entrez une annee: ");
    scanf("%d", &a);

    printf("1. Mois\n");
    printf("2. Jours\n");
    printf("3.houres\n");
    printf("4.minutes\n");
    printf("5.secondes\n");
    printf("entrez votre choix: ");
    scanf("%d", &b);

    if (b >= 1 && b <= 5)
    {
        if (b == 1)
            printf("%d", a * 12);
        else if (b == 2)
            printf("%d", a * 365);
        else if (b == 3)
            printf("%d", a * 8760);
        else if (b == 4)
            printf("%d", a * 525600);
        else
            printf("%d", a * 31536000);
    } else 
        printf("enter nbr between 1 - 5");
}