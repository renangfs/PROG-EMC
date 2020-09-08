#include <stdio.h>

int main ()
{
    int n1,n2,mediaArit;
     printf("Digite nota 1:...");
     scanf("%d", &n1);
       
       printf("Digite nota 2:...");
     scanf("%d", &n2);
       
     mediaArit=(n1+n2)/2;

     if(mediaArit >= 7)
            {
            printf("Sua media foi %d. APROVADO!", mediaArit);
           }
      else if  (mediaArit >= 3) 
             {
             printf("Sua media foi %d. EXAME!", mediaArit);
            }
        else {
             printf("Sua media foi %d. REPROVADO!", mediaArit);
             }
    
    return 0;
}
     
