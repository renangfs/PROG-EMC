#include <stdio.h>

int main()
{
    // Definir variáveis
    float n1, n2, soma, difere, multi, divi;

    // Código
    
    printf("Qual o primeiro número? ");
    scanf("%f", &n1);
    
    printf("Qual o segundo número? ");
    scanf("%f", &n2);
    printf("_______________________________\n\n");
     
    divi = n1/n2;
    multi = n1*n2;
    difere = n1-n2;
    soma = n1+n2;
    printf("_______________________________\n\n");
    printf("soma:%.2f)",soma           ;
    printf("diferen�a:%.2f)",difere          ;
    printf("multiplica��o:%.2f",multi          );
    printf("divis�o:%.2f",divi                 );
    printf("_______________________________\n\n");
    
return 0;
}
