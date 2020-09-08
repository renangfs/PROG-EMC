#include <stdio.h>

int main ()
{
    int n1,n2;

    printf("Digite o primeiro numero:...");
    scanf("%d", &n1);

    printf("Digite o segundo numero:...");
    scanf("%d", &n2);

    if(n1 > n2)
    {
        printf("O numero menor é %d", n2);
    }
    else
    {
        printf("O numero menor é %d", n1);
    }
    return 0;
    
}