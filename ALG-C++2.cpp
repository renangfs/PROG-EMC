#include <iostream>

using namespace std;

//capitulo 5 pagina 147 exercicio 7

int main()
{int idade,i,idadecinq=0,media,porcentagminf=0,quantidademenosqua=0;
 float altura,peso,somaaltura=0,divialtura=0,porcentagem;
 
  for(i=1;i<=2;i=i+1){
    cout << "_________"<<i<<"_________\n";
    cout << "Digite idade:... ";
    cin >> idade;
    //somando pessoas acima de 50
    if(idade>=50)
    idadecinq=idadecinq+1;
    
    cout <<"digite a altura:...";
    cin >> altura;
    //somando alturas entre 10 e 20 para as medias
    if (idade>=10 && idade<=20)
   { somaaltura=somaaltura+altura;
    divialtura=divialtura+1;}
    
    
    
    cout << "Digite o peso:...";
    cin >> peso;
    //somando quantidades de pessoas com peso acima de 40kg
    if(peso<=40)
    {quantidademenosqua=quantidademenosqua+1;}
    
    
    
}  
cout << "________________Resultado__________________\n";
media=somaaltura/divialtura;
porcentagem=quantidademenosqua*100/(i-1);


cout << "Idades acima de 50:..."<<idadecinq<<endl;
cout << "Media das alturas entre 10 e 20 anos:.."<<media<<endl;
cout << "Porcentagem de pessoas com peso inferior a 40kg:..."<<porcentagem<<endl;

system("pause");
}
