#include <iostream>
#include <fstream>
using namespace std;

ifstream itr ("fis.in");

int main()
{
    int a,x[1000],c=1,s1=0,s2=0;
    itr>>a;

    for(int i=0;i<a;i++){
        itr>>x[i];
    }
    for(int i=0;i<a-1;i++){
       int c1=x[i];
       int p=i;
        while (c1){
            s1=s1+c1%c;
            c*=10;
            c1/=10;
        }
        for(int j=i+1;j<a;j++){//undeva la a doua iteratie o ia razna si nu mai sorteaza cu trebuie
            int c2=x[j];
            c=1;
            while (c2)
            {
              s2=s2+c2%c;
              c*=10;
              c2/=10;
            }
            if(s2<s1){
                p=j;
            }
        }
        int aux=x[p];
        x[p]=x[i];
        x[i]=aux;
        c=1;
        s1=0;
        s2=0;

    }
    for(int i=0;i<a;i++){
        cout<<x[i]<<" ";
    }



}