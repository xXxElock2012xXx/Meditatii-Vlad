#include <iostream>
#include <fstream>
using namespace std;

ifstream itr ("fis.in");

int main()
{
    int a,x[1000];
    itr>>a;
    for (int i=0;i<a;i++){
        itr>>x[i];
    }
    for (int i=0;i<(a-1)/2;i++){
        int c=i;
        for (int j=i+1;j<a/2;j++){
            if(x[i]>x[j]){
                c=j;
            }
        }
        int aux=x[c];
        x[c]=x[i];
        x[i]=aux;
    }
    for (int i=0;i<a/2;i++){
        cout<<x[i]<<" ";
    }
    for (int i=a/2;i<a-1;i++){
        int c=i;
        for (int j=i+1;j<a;j++){
            if(x[i]<x[j]){
                c=j;
            }
        }
        int aux=x[c];
        x[c]=x[i];
        x[i]=aux;
    }
    for (int i=0;i<a/2;i++){
        cout<<x[i]<<" ";
    }

}