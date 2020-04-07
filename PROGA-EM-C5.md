### AULA 5
07/04/2020

## EXE 1= FAÇA UM PROGRAMA QUE PEGUE 3 VALORES E FAÇA A MEDIA ARITIMETICA

- esta sendo utilizado o float para numeros decimais

#include <stdio.h>

int main()

{

float n1,n2,n3,resultado;
       
        printf("Digite o primeiro numero:...");
        scanf("%f", &n1);
          
            printf("Digite o segundo numero:...");
             scanf("%f", &n2);
             
                printf("Digite o terceiro numero:...");
                scanf("%f", &n3);
                
                resultado=(n1+n2+n3)/3;
                
                printf("A media aritimetica desses numeros é:  %f",resultado);
                
return 0;
}
