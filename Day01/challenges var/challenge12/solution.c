#include <stdio.h>
#include <math.h>

int main()
{
    int nombre, unite,dizaine,centaine,millier,inverse;
    ptintf("entrez un nombre entier de 4chiffres");
    scanf("%d",&nombre);
    dizaine=(nombre/10)%10;
    centaine=(nombre/100)%10;
    millier=nombre/1000;
    unite=nombre%10;

    inverse=unite*1000+dizaine*100+centaine*10+millier;
     return 0;
}











