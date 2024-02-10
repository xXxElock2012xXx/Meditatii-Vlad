#include <iostream>
#include <fstream>
using namespace std;

ifstream itr("comun.in");

int main()
{
    int n, a[1000], b[1000], c[1000], o=INT_MAX;
    itr >> n;
    for (int i = 0; i < n; i++)
    {
        itr >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        itr >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        itr >> c[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int z = 0; z < n; z++)
            {
                if (a[i] == b[j] && b[j] == c[z] && a[i]<o)
                {
                    o = a[i];
                    i++;
                    j++;
                }
            }
        }
    }
    if(o){
        cout<<o<<" ";
    }else{
        cout<<-1<<" ";
    }
}