#include <iostream>

using namespace std;

int main(){
    int i,idade=0,quantidade=0,vezes=0,media,maior=0;
    
    cout<< "Idade:...";
    cin >> idade;
    
    while(idade>0)
    {quantidade=quantidade+idade;
    vezes=vezes+1;
    cout<< "Idade:...";
    cin >> idade;
        
    if(idade>maior)
    {maior=idade;}
    else
    {idade=idade;}}
    
  
  media=quantidade/vezes;
  
  cout << "A media das idade das pessoas é:..."<<media<<endl;
  cout << "a maior idade é:..."<<maior<<endl;
 
system("pause");
}    

