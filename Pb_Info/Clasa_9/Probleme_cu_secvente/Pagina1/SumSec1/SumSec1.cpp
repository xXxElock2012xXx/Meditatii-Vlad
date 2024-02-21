#include <iostream>

using namespace std;

int main()
{
    int x[1000],a,s=1,d=0,t=0;

    cin>>a;
    for(int i=0;i<a;i++){
        cin>>x[i];
    }
     for(int i=0;i<a;i++){
        if(x[i]%2==1){
            s=i;
            break;
        }
    } for(int i=a-1;i>=0;i--){
        if(x[i]%2==1){
            d=i;
            break;
        }
    }
     for(int i=s;i<=d;i++){
        //cout<<x[i]<<endl;
        t+=x[i];
    }
    cout<<t<<" ";
}
