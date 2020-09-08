#include <stdio.h>
#include <math.h> 

int main()
{
  
  float n1, n2, resultado;
  int opcao;

  printf("Digite o primeiro numero:...");
  scanf("%f", &n1);
  printf("Digite o segundo numero:...");
  scanf("%f", &n2);
  printf("_______________________________\n");
  printf("Selecione uma das opções abaixo:\n\n");
  printf("1- O primeiro número elevado ao segundo número\n");
  printf("2- Raiz quadrada de cada um dos números.\n");
  printf("3- Raiz cúbica de cada um dos números.\n\n");
  printf("Digite a opção desejada: ");
  scanf("%d", &opcao);
  printf("_______________________________\n");
  
  if (opcao == 1)
      {resultado = pow(n1,n2);
      printf("O número %.2f elevado a %.2f resulta em %.2f", n1, n2, resultado);}
  else if (opcao == 2)
      {resultado = sqrt(n1);
      printf("A raiz quadrada de %.2f é %.2f\n", n1, resultado);
      resultado = sqrt(n2);
      printf("A raiz quadrada de %.2f é %.2f\n", n2, resultado);}
  else if (opcao == 3)
      {resultado = pow(n1, 1.0/3.0);
      printf("A raiz cúbica de %.2f é %.2f\n", n1, resultado);
      resultado = pow(n2, 1.0/3.0);
      printf("A raiz cúbica de %.2f é %.2f\n", n2, resultado);}
   else 
     {printf("A opção %d não é um valor aceito!", opcao);}
  return 0;
  
}