#include <iostream>
using namespace std;

int main()
{
    int n,r=0,c=0,i=10;
    cin>>n;
    c=n;
    while (n/i>0){
        if(c/i>9){
            c/=i;
        }else{
            c%=i;
        }
        //cout<<c<<" fuck "<<n/i<<endl;
        if(n%c>r){
            r=n%c;
        }
        i*=10;
        c=n;
    }
    cout<<r<<endl;



}