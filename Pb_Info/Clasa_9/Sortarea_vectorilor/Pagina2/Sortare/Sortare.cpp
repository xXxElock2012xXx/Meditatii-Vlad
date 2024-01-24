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

    for(int i=0;i<a;i++){
        int p=i;
        for(int j=i;j<a-1;j++){
            if(x[j]<x[i]){
                p=j;
            }
        }
        int max=x[i];
        x[i]=x[p];
        x[p]=max;
    }
    for(int i=a-1;i>=0;i--){
        cout<<x[i]<<" ";
    }



    return 0;
}