#include <stdio.h>

int main() {
    int a,b;
    printf("entrez un nombre entier:");
    scanf("%d",&a);
    b=1;
    for(int i=1;i<=a;i++){
      b*=i;
    }
    printf("le factorielle de%d=%d",a,b);
    return 0;
}