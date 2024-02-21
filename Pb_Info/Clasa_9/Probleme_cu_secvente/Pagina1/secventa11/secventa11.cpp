#include <iostream>

using namespace std;

int main()
{
    int n, x[1000],s=1,d=0,se=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i =0; i<n; i++){
       int c=x[i];
       se=1;
        cout<<"fuck"<<endl;//nu intra i while si merge doar de 3 ori,in loc de 5...
       while(c){
            if(c%2!=1){
                se=0;
                break;
            }
            else{
                c%=2;
            }
        }
        if(se==1)
        {
            int  j = i;
            while(j + 1 < n && x[j + 1]%2==1)
                j ++;
            if(j - i + 1 > d - s + 1)
                s = i, d = j;
            i = j;
        }
    }
    cout<<d-s+1<<endl;
}