#include <stdio.h>
#include <math.h>

int main()
{

    float xa, ya, za, xb, yb, zb, ab;
    printf("entrez la valeur de xa,ya,za:");
    scanf("%f  %f %f", &xa, &ya, &za);

    printf("entrez la valeur de xb,yb,zb:");
    scanf("%f  %f %f", &xb, &yb, &zb);

    ab = sqrt(pow((xb - xa), 2) + pow((yb - ya), 2) + pow((zb - za), 2));

    printf("la distance ab =%f", ab);

    return 0;
}
