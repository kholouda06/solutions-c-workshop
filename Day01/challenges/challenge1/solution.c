#include <stdio.h>

int main(){
    char nom[50], prenom[50], sexe[50], mail[100];
    int age;
    
    printf("Entrez votre nom:");
    scanf("%s", nom);

    printf("Entrez votre prenom:");
    scanf("%s", prenom);

    printf("Entrez votre sexe:");
    scanf("%s", sexe);

    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez votre mail : ");
    scanf("%s", mail);

    printf("Nom : %s\n", nom);
    printf("Prenom : %s\n", prenom);
    printf("Sexe : %s\n", sexe);
    printf("Mail : %s\n", mail);
    printf("Age : %d\n", age);

    return 0;
}