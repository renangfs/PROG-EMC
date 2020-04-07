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
       
       ## EXE 2= Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também
sobre o salário base.

     #include <stdio.h>

          int main()
     {
                  int sal,grat,imp,newsal;
    
                      printf("Salario do Funcionario:..");
                      scanf("%d", &sal);
            
                        grat= sal * 5/100 ;
                        imp = sal  * 7/100 ;
                        newsal=sal+grat-imp ;
                
                              printf("O funcionario deve receber:%d",newsal);
                    
                        return 0;
     }

























