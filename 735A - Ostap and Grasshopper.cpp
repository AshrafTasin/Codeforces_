#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int x,y;
    cin >> x >> y >> a;

    size_t g=a.find('G');
    size_t t=a.find('T');


    if(g>t)
    {
        size_t p=g;
        g=t;
        t=p;
    }


    for(int i=g;i<a.length();i=i+y)
    {
        if(a[i]=='#') return (cout << "NO" <<endl,0);
        if(i==t) return (cout << "YES" << endl,0);
    }

    return (cout << "NO" <<endl,0);

}
