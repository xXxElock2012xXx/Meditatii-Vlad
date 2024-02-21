#include <iostream>
#include <fstream>
using namespace std;

ifstream itr("irdds.in");

int main()
{
    int n, m, a[1000], b[1000], c[1000];//nu apare nici macar fuck ul in terminal...
    char s;
    cout<<"fuck"<<" ";
    itr >> n >> m;
    itr >> s;
    for (int i = 0; i < n; i++)
    {
        itr >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        itr >> b[i];
    }
    int i = 0, j = 0, k = 0;
    //intersectie
    if (s == 42)
    {
        while (i < n && j < m)
        {
            if (a[i] == b[j])
            {
                c[k] = a[i];
                i++;
                j++;
                k++;
            }
        }
        for (int z = 0; z < k; z++)
        {
            cout << c[z] << " ";
        }
    }
    else if (s == 43)//reuniune
    {
        while (i < n && j < m)
        {
            if (a[i] == b[j])
            {
                c[k] = a[i];
                i++;
                j++;
            }
            else
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
            if (i % 9 == 0)
            {
                cout << endl;
            }
            cout << c[i] << " ";
        }
    }
    else if (s == 45)//diferenta
    {
        for (int l = 0; l < n; l++)
        {
            int s = 1;
            for (int p = 0; p < m; p++)
            {
                if (a[i] == b[j])
                {
                    s = 0;
                }
            }
            if (s)
            {
                c[k] = a[i];
                k++;
            }
        }
        for (int z = 0; z < k; z++)
        {
            cout << c[z] << " ";
        }
    }
    else if (s == 37)//diferenta simetrica
    {
        int g[1000], q = 0, t[1000], w = 0;
        for (int l = 0; l < n; l++)
        {
            int s = 1;
            for (int p = 0; p < m; p++)
            {
                if (a[i] == b[j])
                {
                    s = 0;
                }
            }
            if (s)
            {
                c[k] = a[i];
                k++;
            }
        }
        for (int l = 0; l < m; l++)
        {
            int s = 1;
            for (int p = 0; p < n; p++)
            {
                if (b[j] == a[i])
                {
                    s = 0;
                }
            }
            if (s)
            {
                g[q] = b[j];
                q++;
            }
        }
        i = 0;
        j = 0;
        while (i < k && j < q)
        {
            if (a[i] == b[j])
            {
                t[w] = a[i];
                i++;
                j++;
                w++;
            }
        }
        for (int z = 0; z < w; z++)
        {
            cout << t[w] << " ";
        }
    }
}