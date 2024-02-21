#include <iostream>
#include <fstream>
using namespace std;

ifstream itr("interclasare3.in");

int main()
{
    int a[1000], b[1000], n, m, c[10000];

    itr>>n>>m;
     for (int i = 0; i < n; i++)
    {
        itr >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        itr >> b[i];
    }
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < n)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j < m)
    {
        c[k] = b[j];
        k++;
        j++;
    }
    for(int z=0;z<k;z++){
        if(c[z]%2==0){
            cout<<c[z]<<" ";
        }
    }
}