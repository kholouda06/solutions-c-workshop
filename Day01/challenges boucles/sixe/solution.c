#include <stdio.h>

int main()
{
    int a, i;
    printf("entez nmbr entier");
    scanf("%d", &a);
    printf("Les %d premiers nombres pairs sont: ", a);
    for (i = 1; i <= a; i++)
    {
        printf("%d", 2 * i);

        if (i < a)
        {
            printf(",");
        }
    }
    return 0;
}