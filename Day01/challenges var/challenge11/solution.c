#include <stdio.h>
int main (){



 float longueur,largeur,surface;
surface = longueur * largeur ;

    printf("entrez la longueur et la largeur du rectangle:");
    scanf("%f %f",&longueur,&largeur);
    surface = longueur * largeur ;
    printf("la surface du rectangle =%f",surface);
     return 0;
}