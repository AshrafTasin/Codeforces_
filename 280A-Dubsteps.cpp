#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
        {
            cout << " ";
            i+=2;
        }
        else cout << a[i];
    }

    return 0;
}
