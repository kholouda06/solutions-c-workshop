#include <stdio.h>

int main() {
    int n,somme=0;
    int array[n];
    
    printf("enter nmbrof elemments");
    scanf("%d",&n);
    
    
    for(int i=0;i<n;i++){
        printf("enter elements du tableau");
        scanf("%d",&array[i]);
    }

    for(int i=0; i<n; i++){
        somme+=array[i];
    }
    printf("l somme est \n");
    printf("%d",somme);
    
    return 0;
}
