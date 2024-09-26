#include <stdio.h>

int main() {
    char lettre;
    printf("entrez un lettre ");
    scanf("%c", &lettre);
    if(lettre >= 65 && lettre <= 90)
        printf("un lettre majuscule ");
    else 
        printf(" non");

    return 0;
}