#include <iostream>
using namespace std;

int  CalculDiv(int a,int n){
    for(int i=1;i*i<=a;i++){
        if(a%i==0){
            n++;
        }
    }
    return n;
}

int main()
{
    int a,b,n=0,s=0;
    cin>>a>>b;
    while (a<b){
        //cout<<a<<" fuck"<<endl;
       /* CalculDiv(a,n);
        cout<<n<<" de ce nu iesi?"<<endl;*/
        for(int i=1;i*i<=a;i++){
        if(a%i==0){
            n++;
        }
    }
        if(n==3){
            cout<<a<<endl;
            s=1;
        }
        a++;
        n=0;
    }
    if(s==0){
        cout<<"NU EXISTA NR CU 3 DIVIZORI"<<endl;
    }
}