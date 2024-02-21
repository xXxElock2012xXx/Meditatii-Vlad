#include<iostream>
#include<fstream>

using namespace std;

ifstream intr ("fis.in");

int main()
{
    int x[1000],a;
    intr>>a;
    for(int i=0;i<a;i++){
        intr>>x[i];
    }
    bool sortat=true;
    do{
        sortat=true;
        for (int i=0;i<a-1;i++){
            if(x[i]<x[i+1]){
                int aux=x[i];
                x[i]=x[i+1];
                x[i+1]=aux;
                sortat=false;
            }
        }
    }while(!sortat);
    for(int i=0;i<a;i++){
        cout<<x[i]<<" ";
    }



    return 0;
}