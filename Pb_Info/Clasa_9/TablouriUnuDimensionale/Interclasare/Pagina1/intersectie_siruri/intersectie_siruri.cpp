#include <iostream>
#include <fstream>
using namespace std;

ifstream itr("intersectie.in");

int main()
{
    int a[1000],k=0,b[1000],l=0,t=0;
    whlie(itr>>a[k]){//nu imi dau seamma daca introduce si nnici u ruleaza nnici de mana nici dela buton
        t++;
    }
    for(int i=0;i<t-1;i++){
        int c=a[i];
        for(int j=i+1;j<t;j++){
            while(a[j]){
                j++;
            }
            j++;
            if(a[i]==a[j] && a[j]!=0){
                b[k]=a[i];
                b++;
            }
        }
    }
    for(int i=0;i<k-1;i++){
        for(int j=i+1;j<k;j++){
            if(b[j]<b[i]){
                int max=b[j];
                b[j]=b[i];
                b[i]=max;
            }
        }
    }
     for(int i=0;i<k-1;i++){
        cout<<b[i];
    }



}