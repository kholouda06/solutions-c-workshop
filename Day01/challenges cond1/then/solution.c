#include <stdio.h>

int main() {
    int datte, anne,moi,jour;
    printf(" Formatage de la Date jour :");
    scanf("%d",&jour);
     printf(" Formatage de la Date moi :");
    scanf("%d",&moi);
     printf(" anne");
    scanf("%d",&anne);
   switch(moi){
    case 1: printf("%d janvier %d",jour,anne);
    break;
    case 2: printf("%d fevrier %d",jour,anne);
    break;
    case 3: printf("%d mars %d",jour,anne);
    break;
    case 4: printf("%d avrile %d",jour,anne);
    break;
    case 5: printf("%d mai %d",jour,anne);
    break;
    case 6: printf("%d juin %d",jour,anne);
    break;
    case 7: printf("%d juillet %d",jour,anne);
    break;
    case 8: printf("%d aout %d",jour,anne);
    break;
    case 9: printf("%d september %d",jour,anne);
    break;
    case 10: printf("%d october %d",jour,anne);
    break;
    case 11: printf("%d november %d",jour,anne);
    break;
    case 12: printf("%d december %d",jour,anne);
    break;
    default : printf("null");
   }

    return 0;
}