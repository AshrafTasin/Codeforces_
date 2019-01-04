#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    int n,m1;
    map<string,string> m;
    vector<string> v;

    cin >> n >> m1;
    for(int i=1;i<=m1;i++)
    {
        string a,b;
        cin >> a >> b;
        if(a.length()>b.length())
        {
            m[a]=b;
            m[b]=b;
        }
        else
        {
            m[b]=a;
            m[a]=a;
        }
    }

    for(int i=1;i<=n;i++)
    {
        string s;
        cin >> s;
        v.pb(m[s]);
        v.pb(" ");
    }

    for(int i=0;i<v.size();i++) cout << v[i];

    return 0;
}
