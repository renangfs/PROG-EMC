#include <iostream>

using namespace std;
//capitulo 5 pagina 148 numero 18
int main()
{int i=1,somasal=0,media,idade=1,maiorid=0,menorid=9999,quantf=0,respid;
 float salario,salmulheres,menorsal=999999999;
 char sexo,respsexo;
 
while(idade!=777){

cout << "________________"<<i<<"_____________________\n";

cout << "Digite a idade: . . .";
cin >> idade;


//somando o salario junto com o valor de i
cout << "Digite o salario: . . .";
cin >> salario;
salmulheres=salario;
somasal=somasal+salario;
if(i=i)
{i=i+1;}


cout << "Digite o sexo(M) ou (F): . . .";
cin >> sexo;
//quantidade de mulheres com o salario 200
if(sexo == 'F'&& salmulheres<=200)
{quantf=quantf+1;}

if(salario<menorsal)
{menorsal=salario;
respsexo=sexo;
respid=idade;}

if(idade>maiorid)
{maiorid=idade;}
if(idade<menorid)
{menorid=idade;}

cout << "Digite a idade: . . .";
cin >> idade;

if (idade<=0)
{idade=777;}
}
//dividindo a media do salario
media=somasal/(i-1);
cout << "_________________RESULTADO____________________\n";
cout<<"Media do salario:..."<<media<<endl;
cout<<"Maior idade do grupo:..."<<maiorid<<endl;
cout<<"Menor idade do grupo:..."<<menorid<<endl;
cout<<"Quantidade de mulheres com salario ate R$200:..."<<quantf<<endl;
cout<<"Idade e o sexo da pessoa que possui o menor salario:..."<<menorsal<<"   e idade:.."<<respid<<"   tem o sexo:.."<<respsexo<<endl;
}	

