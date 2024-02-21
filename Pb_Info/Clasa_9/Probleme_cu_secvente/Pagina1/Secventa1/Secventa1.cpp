#include <iostream>

using namespace std;

int main(){

    int x[1000],n,y[1000],m,s=1,d=0;;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>y[i];
    }
    int k=0;
    for(int i=0;i<n;i++){
        if(x[i]==y[k]){
            k++;
        }else{
            k=0;
            i--;
        }
        if (k == m){
            s = i-m + 2;
            break;
        }
    }
    if(s){
        cout<<s<<endl;
    }else{
        cout<<"NU"<<endl;
    }
}
