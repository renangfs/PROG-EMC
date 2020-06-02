####AULA 26/05/2020



     using namespace std;

       int main()
       {int i;
             {for(i=1;i<=5;i++)

             cout << i;}
       }
      
 ______________________________________________________________________________________________________________________________________
       
       #include <iostream>

       using namespace std;

       int main()
  
          {  int i,idade,sintomas,dias,somaidade=0,media,quantpessoa=0,somadias=0,medDias;

                  for(i=1;i<=5;i++)
                 {cout << "________________"<<i<<"_______________"<<endl; 
                  cout << "Qual idade?:...";
                  cin >> idade;
                  cout << "1 ---- sim \n2 ---- nao\nTeve sintomas?:...";
                  cin >> sintomas;
                  if (sintomas==1)
                     quantpessoa=quantpessoa+1;
                    {cout << "por quantos dias teve sintomas?:...";
                     cin >> dias;}
                    somadias=somadias+dias;
                    somaidade=somaidade+idade;}
                    cout << "_____________________________________\n"; 
                    medDias=somadias/quantpessoa;
                    media=somaidade /(i-1) ;
           cout << "Idade media é:..."<<media<<"anos"<<endl;
           cout << "Quantidade de pessoas que tiveram sintomas:..."<<quantpessoa<<endl;
           cout << "media de dias com sintomas:..."<<medDias<<endl;
        
}



  
