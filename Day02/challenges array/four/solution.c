#include <stdio.h>

int main()
{
    int n, max;
    int array[n];

    printf("enter nmbrof elemments");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("enter elements du tableau");
        scanf("%d", &array[i]);
    }

    max = array[n];
    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
            max = array[i];
    }
    printf("le plus grand nombre est \n");
    printf("%d", max);

    return 0;
}
