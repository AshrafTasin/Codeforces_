/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   05.09.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
using namespace std;

int main()
{
    string s;
    int a;
    ll flag=0,val=0;
    vector<int>v;
    map<char,int> m;

    cin >> s >> a;

    for(int i='a';i<='z';i++)
    {
        int x;
        cin >> x;
        v.pb(x);
        m[i]=x;
    }

    int mxx=*max_element(all);

    for(int i=0;i<s.size();i++) val+=(i+1)*m[s[i]];
    int i=s.size()+1;

    while(a--)
    {
        val+=i*mxx;
        ++i;
    }

    cout << val << endl;

    return 0;
}
