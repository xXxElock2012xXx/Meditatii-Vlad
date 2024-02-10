#include <iostream>
using namespace std;

int main()
{
    int x[1000],a,max=INT_MIN,min=INT_MAX,pm=0,pmi=0;
    cin>>a;
    for(int i=0;i=a;i++){
        cin>>x[i];
    }
     for(int i=0;i=a;i++){
        if(x[i]>max){
            max=x[i];
            pm=i;
        }else if(x[i]<min){
            min=x[i];
            pmi=i;
        }
        cout<<"fuck"<<endl;//nu inteleg de ce nu vrea sa afiseze nimic....


    }
    if(pmi>pm){
        for(int i=pm;i<pmi-1;i++){
            int c=i;
            for(int j=i+1;j<pmi;j++){
                if(x[j]<x[i]){
                    c=j;
                }
            }
            int aux=x[c];
            x[c]=x[i];
            x[i]=aux;
        }
    }else{
        for(int i=pmi;i<pm-1;i++){
            int c=i;
            for(int j=i+1;j<pm;j++){
                if(x[j]<x[i]){
                    c=j;
                }
            }
            int aux=x[c];
            x[c]=x[i];
            x[i]=aux;
        }
    }
    for(int i=0;i=a;i++){
        cout<<x[i]<<" ";
    }

}