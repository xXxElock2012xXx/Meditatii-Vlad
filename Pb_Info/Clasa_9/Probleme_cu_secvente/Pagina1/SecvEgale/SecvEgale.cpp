#include <iostream>

using namespace std;

int main()
{
   int n, x[1000],s=1,d=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x[i];
  }

    for(int i = 0 ; i < n ; i ++){
        int c=x[i];
        if(x[i]==c)
        {
            int  j = i;
            while(j + 1 < n && x[j + 1]==c)//vede ca prima secventa maxima e egala cu ultima si nnu mai cauta
                j ++;
            if(j - i + 1 >= d - s + 1){
                s = i; d = j;

            }
            i = j;
        }
    }
    cout<<s+1<<" "<<d+1<<endl;
}
