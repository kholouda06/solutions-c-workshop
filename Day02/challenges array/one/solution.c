 #include <stdio.h>

int main() {
  int values[5];
 int n=sizeof(values)/sizeof(values[0]);
 printf("Enter number of elements: ");
  scanf("%d", &n);
     for(int i=0; i < n; ++i) {
    printf("Enter number%d: ",i+1);
    scanf("%d", &values[i]);}
    
          


 

    return 0;
}