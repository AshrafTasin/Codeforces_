/*----------------------|
/ Author : Ashraf Tasin |
/ Date   : 01.08.2018   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;

bool cmp(string a,string b)
{
    return a.length()<b.length();
}

int main()
{
    vector<string> v;
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        string a;
        cin >> a;
        v.pb(a);
    }

    sort(v.begin(),v.end(),cmp);

    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i+1].find(v[i])== string::npos) return(cout << "NO" << endl,0);
    }

    cout << "YES" << endl;
    for(int i=0;i<n;i++) cout << v[i] << endl;


    return 0;
}
