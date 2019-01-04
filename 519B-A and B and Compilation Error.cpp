/*-----------------------|
| Author : Ashraf Tasin  |
| Date   : 27.07.2018    |
|-----------------------*/


#include<bits/stdc++.h>
#define pb push_back
#define ll long long

using namespace std;

int main()
{
    vector<ll> v1,v2,v3;
    ll n,one=0,two=0;
    cin >> n;

    for(ll i=0;i<n;i++)
    {
        ll p;
        cin >> p;
        v1.pb(p);
    }

    sort(v1.begin(),v1.end());

    for(ll i=0;i<n-1;i++)
    {
        ll p;
        cin >> p;
        v2.pb(p);
    }
    sort(v2.begin(),v2.end());

    for(ll i=0;i<n-2;i++)
    {
        ll p;
        cin >> p;
        v3.pb(p);
    }
    sort(v3.begin(),v3.end());

    for(ll i=0;i<n-1;i++)
    {
        if(v1[i]!=v2[i])
        {
            one=min(v1[i],v2[i]);
            break;
        }
    }

    if(one==0) one=v1[n-1];

    for(ll i=0;i<n-2;i++)
    {
        if(v2[i]!=v3[i])
        {
            two=min(v2[i],v3[i]);
            break;
        }
    }

    if(two==0) two=v2[n-2];

    cout << one << endl << two << endl;

    return 0;

}
