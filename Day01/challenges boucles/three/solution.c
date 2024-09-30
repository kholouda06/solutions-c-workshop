#include <stdio.h>

int main() {
    int a,b;
    printf("entrez un nombre entier");
    scanf("%d",&a);
     b=0;
    for(int i=1;i<=a;i++)
    b+=i;
    printf("la somme est %d",b);
    
    return 0;
}