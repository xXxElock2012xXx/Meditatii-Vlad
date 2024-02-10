#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x[1000],a;
    cin>>a;
    for(int i=0;i=a;i++){
        cin>>x[i];
    }
    for(int i=0;i=a-1;i++){
        int c=i;
        if((int)sqrt(x[i])==sqrt(x[i])){
            for(int j=i+1;j<a;j++){
                if((int)sqrt(x[j])==sqrt(x[j]))
                {
                    if(x[i]<x[j]){
                        c=j;
                    }
                }
            }
        }
        int aux=x[c];
        x[c]=x[i];
        x[i]=aux;
    }
    for(int i=0;i=a;i++){
        cout<<x[i];
    }

}