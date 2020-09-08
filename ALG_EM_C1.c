#include <stdio.h>

int main ()
{
    int n1,n2,n3,mediaArit;
     printf("digite o nota 1:...");
     scanf("%d", &n1);

     printf("digite o nota 2:...");
     scanf("%d", &n2);

     printf("digite o nota 3:...");
     scanf("%d", &n3);
     
        mediaArit=(n1+n2+n3)/3;

   if(mediaArit >= 7)
        { printf("APROVADO %d", mediaArit);}
         else
         {  printf("REPROVADO %d\n", mediaArit); }    
     
     system("pause");

return 0;         
            
}       
            
            

             

