#include <iostream>
using namespace std;

int main()
{
    int n,s=0,i=1,t=0;
    cin>>n;
    int c=n;
    while (c){
        i*=10;
        c/=10;
    }
    i/=10;
    c=n;
    do{
        if(n>=i){
            t=t+n;
        }
        s=(n%10)*i;
        n=n/10+s;
    }while (n!=c);

    cout<<t<<endl;
}