#include <stdio.h>
void factoril(int a);
int main() {
    float Voroodi1;
    float Voroodi2;
    int amalgar=0;
    float anwser;
    while (amalgar<=5) {
        printf("\n1: addition | 2:subtarction | 3:multipliction | 4:Division | 5:factoril | 6:Quit ");
        printf("\nenter your choice: ");
        scanf("%d", &amalgar);
        if (amalgar == 1) {
            printf("\nadad aval ra vared konid: ");
            scanf("%f", &Voroodi1);
            printf("\nadad dovom ra vared konid: ");
            scanf("%f", &Voroodi2);
            anwser = Voroodi1 + Voroodi2;
            printf("your anwser is : %.2f", anwser);
        } else if (amalgar == 2) {
            printf("\nadad aval ra vared konid: ");
            scanf("%f", &Voroodi1);
            printf("\nadad dovom ra vared konid: ");
            scanf("%f", &Voroodi2);
            anwser = Voroodi1 - Voroodi2;
            printf("your anwser is : %.2f", anwser);
        } else if (amalgar == 3) {
            printf("\nadad aval ra vared konid");
            scanf("%f", &Voroodi1);
            printf("\nadad dovom ra vared konid: ");
            scanf("%f", &Voroodi2);
            anwser = Voroodi1 * Voroodi2;
            printf("your anwser is : %.2f", anwser);
        } else if (amalgar == 4) {
            printf("\nadad aval ra vared konid: ");
            scanf("%f", &Voroodi1);
            printf("\nadad dovom ra vared konid: ");
            scanf("%f", &Voroodi2);
            anwser = Voroodi1 / Voroodi2;
            printf("your anwser is : %.2f", anwser);
        } else if (amalgar == 5) {
            printf("\nadad aval ra vared konid: ");
            scanf("%f", &Voroodi1);
            factoril(Voroodi1);
        }

    }

    return 0;
}
void factoril(int a)
{   int b=1;
    for (int i = 1; i <= a; i++)
    {
       b*=i;
    }
    printf("your anwser is : %d ",b);

}
