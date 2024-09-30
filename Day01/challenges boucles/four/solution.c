#include <stdio.h>

int main() {
    int a,count=0,num=1;
    printf("entrez un nombre");
    scanf("%d",&a);
    printf("les %d premier impaire sont : ",a);
    while (count < a) {
        printf("%d",num);
        num+=2;
        count++; 
    }
    return 0;
}