#include <iostream>

using namespace std;

int main()
{
    int n,x[1000],t,k,c=0;

    cin>>n>>t>>k;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
     for(int i=0;i<n;i++){
        int cp=k,cl=i;//cp=copie;cl=clona
       int s=1;
        while (cp)
        {
           if(x[cl]>=t){
                s=0;
                //cout<<"fuck "<<endl;
                break;
            }
            cl++;
            cp--;
        }
        if(s==1){
            c++;
        }
    }
    cout<<c<<endl;
}