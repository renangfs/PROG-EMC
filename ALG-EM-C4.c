#include <stdio.h>

int main()
{
    int n1,n2,n3;
    //entrada//
          printf("Digite o primeiro numero:...");
          scanf("%d", &n1);
          printf("Digite o primeiro numero:...");
          scanf("%d", &n2);
          printf("Digite o primeiro numero:...");
          scanf("%d", &n3);
    //PROCESSO//
                if(n1 > n2)
                {
                    printf("O maior numero é %d",n1);
                }   
                else if(n2 > n3)
                {
                    printf("O maior numero é %d",n2);
                }
                else 
                {
                    printf("O maior numero é %d",n3);
                }
                return 0;
}
