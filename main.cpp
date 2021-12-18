/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    float ani=0,suma=0,dobanda1=0,dobanda2=0,suma_anuala=0,castig=0;
    cout<<"Introdu suma:";
    cin>>suma;
    suma_anuala=suma;
    cout<<"Introdu dobanda:";
    cin>>dobanda1;
    cout<<"Introduceti anii:";
    cin>>ani;
    cout<<"Introdu dobanda pentru "<<ani<<" ani:";
    cin>>dobanda2;
    cout<<"\n";
    cout<<"Calculul sumei pentru reinvestirea dobanzii in fiecare an:\n";
    for(int i=0;i<ani;i++){
        
        suma_anuala=suma_anuala+dobanda1/100*suma_anuala;
        cout<<"Anul"<<i+1<<" "<<suma_anuala<<"\n";
        
    }
    cout<<"\n";
    cout<<"Calculul pentru investirea sumei initiale pentru intreaga perioada:\n";
    castig=castig+ani*dobanda/100*suma;
    cout<<"Suma totala este de "<<suma+castig;
    return 0;
}
