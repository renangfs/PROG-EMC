#include <stdio.h>

int main()

{
    int salario,porcento,newsal;

            printf("Digite o salario:...");
            scanf("%d",&salario);

            if(salario < 500)
            {
                porcento=salario*0.30;
                newsal=salario+porcento;

                printf("Seu salario teve bonus de 30 Porcento R$: %d", porcento );printf("           Seu salario atualizado e R$: %d", newsal);
            }
                    else
                    {
                        printf("Seu salario nao obteve o bonus");
                    }
return 0;
 }