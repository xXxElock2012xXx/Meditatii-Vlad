#include <iostream>
#include <fstream>
using namespace std;

ifstream itr("perchi6.in");

int main()
{
    int x[1000], y[1000], n, m, t = 0;
    itr >> n;
    cout<<"fuck"<<" ";
    for (int i = 0; i < n; i++)
    {
        itr >> x[i];
    }
    itr >> m;
    for (int i = 0; i < m; i++)
    {
        itr >> y[i];
    }
    if (m > n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (x[i] == y[j])
                {
                    t++;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (x[j] == y[i])
                {
                    t++;
                }
            }
        }
    }
    cout << t << " ";
}