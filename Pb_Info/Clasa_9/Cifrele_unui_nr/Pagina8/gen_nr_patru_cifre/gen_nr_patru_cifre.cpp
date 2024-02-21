#include <iostream>
using namespace std;

int main()
{
    int c1,c2,nr=1000,s=0,u=0;
    cin>>c1>>c2;
    while (nr<10000){
        if(nr/1000>=c1 && c2<=(nr/10)%10){
            s=(nr/100)%10;
            u=nr%10;
            //cout<<s<<" fuck "<<u<<endl;
            if(u==s && u%2==0 && s%2==0){
                cout<<nr<<endl;
            }

        }
        nr++;
    }

}