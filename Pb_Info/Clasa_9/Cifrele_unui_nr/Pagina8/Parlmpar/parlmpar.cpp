#include <iostream>
using namespace std;

void VecRezParlmpPar(int a){
    int c=0,j1=0,i=10;
    c=a;
    while (c){
        if((c%10)%2){
          j1=a%i;
          a/=i;
          a*=(i/10);
          j1%=(i/10);
          a+=j1;
        }
        c/=10;
    }

}
void VecRezParlmpImpar(int b){//zice ca este incompatibil si nu inteleg de ce(void cu int)
    int c=0,j1=0,i=10;
    c=b;
    while (c){
        if((c%10)%2==0){
          j1=b%i;
          b/=i;
          b*=(i/10);
          j1%=(i/10);
          b+=j1;
        }
        c/=10;
    }

}

int main()
{
    int a,b,P1,P2;
    cin>>a>>b;
    if(a%2==0){
       P1=VecRezParlmpPar(a);
        P2=VecRezParlmpImpar(b);
    }else{
        P1=VecRezParlmpPar(b);
        P2=VecRezParlmpImpar(a);
    }
    if(P1>P2){
        cout<<P1<<endl;
    }else{
        cout<<P2<<endl;
    }

}