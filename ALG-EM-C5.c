#include <stdio.h>

int main()
{
    // Definir variáveis
    float n1, n2, media, diferenca, produto, divisao, opcao;

    // Código
    
    printf("Qual o primeiro número? ");
    scanf("%f", &n1);
    
    printf("Qual o segundo número? ");
    scanf("%f", &n2);
    printf("_______________________________\n\n");
 
    printf("Selecione uma das opções abaixo:\n\n");
    printf("1 - Média do Usuário\n");
    printf("2 - Diferença entre o maior e menor\n");
    printf("3 - Produto entre os números digitados\n");
    printf("4 - Divisão do primero pelo segundo\n");
    printf("_______________________________\n\n");
    printf("Digite o número da operação...");
    scanf("%f", &opcao);

    if (opcao == 1){
        media = (n1 + n2)/2;
        printf("Média: %.2f", media);
    }
    else if (opcao == 2) {
         if(n1>n2)
            {diferenca=n1-n2;
            printf("DIFERENCA:%.2f",diferenca);}
         else 
           {diferenca=n2-n1;
           printf("DIFERENCA:%.2f",diferenca);}
    }
    else if(opcao == 3){
        produto=n1*n2;
        printf("PRODUTO:%.2f",produto);
        }
    else if(opcao == 4){
         if(n2 == 0)
         {printf("Seu segundo digito foi 0,nao podemos fazer essa operação");}
         else
         {divisao=n1/n2;
        printf("DIVISAO:%.2f",divisao);}
    }
    else
    {
       printf("\n____________ERRO!!!_____________ \n Numero nao cadrastado......");
    }
        
return 0;
}



