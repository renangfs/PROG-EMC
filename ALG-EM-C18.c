#include <stdio.h>

int main()
{
    
    int idade;
    printf("Digite sua idade:.. ");
    scanf("%d", &idade);
    
    if (idade > 17){
        printf("Você já é maior de idade!");
    }
    else {
        printf("Você é menor de idade");
    }
    
    return 0;
}  