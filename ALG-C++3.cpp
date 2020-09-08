#include <iostream>
using namespace std;

//Capitulo 5 pag 147 numero 8 ..........corrigido 02/06/2020
int main()
{
//variaveis    
int idade,i,su50anoinf60peso=0,qtdAzul=0,porcentagem,qtdRuivas=0;
float peso,altura,somaidade=0,quantIdade=0,media;
char olhos,cabelos;
//entrada de dados
for(i=1 ; i<=5; i=i+1)
{
    cout << "___________"<<i<<"_____________"<<endl;
    cout << "Digite a idade:...";
    cin >> idade;
    cout << "Digite peso:...";
    cin >> peso;
    cout << "Digite altura:...";
    cin >> altura;
    
    cout << "Cor dos Olhos \nA---AZUL\nP---PRETO\nV---VERDE\nC---CASTANHO:...:";
    cin >> olhos;
    cout << "Cor dos cabelos \nP---PRETO\nL---LOIRO\nC---CATANHO\nR---RUIVO:...";
    cin >> cabelos;
    //calculando quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg
    if(idade>=50 && peso<=60)
    {su50anoinf60peso=su50anoinf60peso+1;}
    //calculando media das idades das pessoas com altura inferior a 1.50
    if(altura <=1.50)
    {somaidade=somaidade+idade;
    quantIdade=quantIdade+1;}
    //calculando a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas
    if(olhos == 'A' || olhos == 'a')
    {qtdAzul=qtdAzul+1;}
    //calculando quantidade de pessoas ruivas que nao possuem olhos azuis
    if (cabelos == 'R'|| cabelos == 'r')
     {if (olhos !='A') //não usar o || com !=
      {if (olhos !='a')
      {qtdRuivas=qtdRuivas+1;}}}
    
} 

cout << "_____________Resultado_______________\n";
// saida de dados da media
media=somaidade/quantIdade;
//saida de dados da porcentagem = numeros de pessoas com olhos azuis vezes 100 dividido pela quantidade de loop
porcentagem=qtdAzul*100/(i-1);

cout <<"quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg:..."<<su50anoinf60peso<<endl;

cout <<"Media das idades das pessoas com altura inferior a 1.50:..."<<media<<endl;

cout <<"Porcentual de pessoas com olhos azuis entre todas as pessoas analisadas;..."<<porcentagem<<"%"<<endl;

cout <<"Quantidade de pessoas Ruivas e que nao possuem olhos azuis:..."<<qtdRuivas<<endl;

system("pause");

}
