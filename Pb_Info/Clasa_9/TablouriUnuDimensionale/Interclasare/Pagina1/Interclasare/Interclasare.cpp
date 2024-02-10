#include <iostream>
#include <fstream>
using namespace std;

ifstream itr("interclasare.in");

int main()
{
    int a[1000], b[1000], n, m, c[10000];
    itr >> n;
    for (int i = 0; i < n; i++)
    {
        itr >> a[i];
    }
    itr >> m;
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
    for (int i = 0; i < m + n; i++)
    {
        if (i % 9 == 0)
        {
            cout << endl;
        }
        cout << c[i] << " ";
    }
}