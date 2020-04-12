### AULA 5
07/04/2020

## EXE 1/exe 2 livro= FAÇA UM PROGRAMA QUE PEGUE 3 VALORES E FAÇA A MEDIA ARITIMETICA

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
       
## EXE 2/exe 6 do livro-= Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também
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
    
    
### EXE 3= FAÇA UM PROGRAMA QUE DIGA SE A PESSOA POR IDADE VOTA OU NÃO

    #include <stdio.h>
     
          int main()
          {
             int idade;
        
             printf("digite sua idade:..");
             scanf("%d", &idade);
         
                  if(idade > 17) 
                  {printf("VOTA!!");}
                  else
                  {printf("NÃO VOTA!!");}
             
            
        

     }
     
### EXE 4/exe7 livro= Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.

 #include <stdio.h>

          int main()   
    
  {              
  int salbase,dezporc,newsal;

                              printf("digite o salario do funcionário:.");
                              scanf("%d",&salbase);
                
                                  dezporc=salbase*0.10;
                
                                  newsal=salbase-dezporc+50;
                
                                  printf("O valor a ser pago é:%d", newsal);
                
                                  return 0;        
}

























