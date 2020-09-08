#include <iostream>

using namespace std;

int main()
{
   //COMO PARAR A ESTRUTURA EMQUANTO COM NUMEROS NEGATIVOS
    
    float cr=0,novocr=0,fim=9999;
    while(fim!=0) 
    
   {cout <<"Digite seu CR: . . .";
    cin >> cr;
    
    if (cr<=0)
     {cout << "Fim de programa";
     fim=0;}
     
    else if(cr>novocr)
    {novocr=cr;}
    else if (novocr>cr)
    {novocr=novocr;}
     
   }
    
    
    
 cout <<endl<<"_________________________"<<endl;   
 cout <<"O Maior CR e: "<<novocr<<endl;
 system ("pause");
}
