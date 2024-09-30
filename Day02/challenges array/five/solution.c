#include <stdio.h>

int main() {
    int n,min;
    int array[n];
    
    printf("enter nmbrof elemments");
    scanf("%d",&n);
   
    for(int i=0;i<n;i++){
        printf("enter elements du tableau");
        scanf("%d",&array[i]);
    }


     min=array[n];
    for(int i=0; i<n; i++){
        if(min> array[i])
        min=array[i];
    }
    printf("le plus PETIT nombre est \n");
    printf("%d",min);
    
    return 0;
}
