#include <iostream>
#include <fstream>
using namespace std;

ifstream itr("multimi.in");

int main()
{
    int a[1000], b[1000], n, m, c[10000],o[1000];
    itr >> n;
    //cout<<"fuck"<<" ";
    for (int i = 0; i < n; i++)
    {
        itr >> a[i];
    }
    itr >> m;
    for (int i = 0; i < m; i++)
    {
        itr >> b[i];
    }
    int i = 0, j = 0, k = 0,l=0;
    while (i < n && j < m)
    {
        if(a[i]==b[j]){//nnu afiseaza si 9le...
            o[l]=a[i];
            l++;
            i++;
            j++;
        }
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
    for (int i = 0; i < k; i++)
    {
        cout << c[i] << " ";
    }
    cout<<endl;
    for (int i = 0; i < l; i++)
    {
        cout << o[i] << " ";
    }
}