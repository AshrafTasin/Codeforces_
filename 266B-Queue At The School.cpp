#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int n,x,i;
    cin >> n >> x >> a;

    while(x--)
    {
        for(i=0;i<a.size();i++)
        {
            if(a[i]=='B' && a[i+1]=='G')
            {
                swap(a[i],a[i+1]);
                i++;
            }
        }
    }

    cout << a << endl;

    return 0;
}
