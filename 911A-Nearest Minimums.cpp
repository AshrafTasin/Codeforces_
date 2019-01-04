/*----------------------|
/ Author : Ashraf Tasin |
/ Date   : 01.08.2018   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;

int main()
{
    int n;
    int w=0,cnt=1;
    vector<ll> v;
    vector<ll> :: iterator it;
    vector<ll> v1;
    vector<ll> v2;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        ll j;
        cin >> j;
        v.pb(j);
    }

    v1=v;
    sort(v1.begin(),v1.end());

    for(int i=0;i<v1.size()-1;i++)
    {
        if(v1[i]==v1[i+1]) w++;
        else break;
    }


    it=find(v.begin(),v.end(),v1[0]);
    it++;

    for(it=it;it!=v.end();it++)
    {
        if(*it!=v1[0]) cnt++;
        else
        {
            v2.pb(cnt);
            cnt=1;
        }
    }


    sort(v2.begin(),v2.end());
    cout << v2[0] << endl;

    return 0;
}
