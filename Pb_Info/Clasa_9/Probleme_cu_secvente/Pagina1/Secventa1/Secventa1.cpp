#include <iostream>

using namespace std;

int main(){

    int x[1000],n,y[1000],m,s=1,d=0;;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    cin>>m;
    for(int i=0;i<n;i++){//nu afiseaza nici acar fuck inainte de a incepe programul...
        cin>>y[i];
    }
    cout<<"fuck"<<endl;
    for(int i=0;i<n;i++){
        if(x[i]==y[i]){
             int j=i;
            while(j+1 < n && x[j+1]==y[j+1])
                j ++;
            if(j-i + 1 > d-s +1)
                s = i, d = j;
            i = j;
        }
    }
    if(s){
        cout<<s<<endl;
    }else{
        cout<<"NU"<<endl;
    }




}



