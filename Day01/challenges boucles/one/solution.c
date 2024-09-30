#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    printf("entrez un nombre");
    scanf("%d",&a);
    for (int i= 1; i<=10; i++) {
     printf("%d * %d = %d\n", a, i, i*a);
}
return 0;
}