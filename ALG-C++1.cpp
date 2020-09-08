#include <iostream>
#include <math.h>
using namespace std;

int main()
{    char transacao[1];
     float  totalV, totalP, somaV = 0, somaP = 0,somaVP,prestacao,prestacao1,prestacao2,prestacao3,p,v;
     int i;
     for( i = 1; i <= 4; i++ )
     
    {
    cout <<"_____Nr:" << i <<"________"<<endl;
    
    cout << "Digite a forma de pagamento\nÀ vista.......v \nA prazo.......p\n\nLetra: . . .";
    cin >> transacao;
    
    
    if (transacao[1] == v)
       {cout << "Total a ser pago à vista..:R$";
        cin >> totalV;
        somaV = somaV + totalV;}
       
    
    else if (transacao[1] == p)
    
     {cout << "Total a ser pago a prazo..:";
      cin >> totalP;
      
      somaP = somaP + totalP;
      prestacao = totalP;}
      
    
     cout <<  "_____________" << endl;
     
      //valor total das compras efetuadas
        somaVP = somaP + somaV;
     //divisao por 3    
        prestacao = somaVP/3;
       
}        
    cout << "Valor total da compra à vista..:" << somaV << endl;
    cout <<"Valor total de compras a prazo..:" << somaP << endl;
    cout << "Valor total das compras efetuadas..:" << somaVP << endl;
    cout << "Valor da primeira prestação..:" << floorf(prestacao*100)/100 << endl;
    cout << "Valor da segunda prestação..:"  << floorf(prestacao*100)/100 << endl;
    cout << "Valor da terceira prestação..:" << floorf(prestacao*100)/100 << endl;
    

    return 0;
system("pause"); 
}
