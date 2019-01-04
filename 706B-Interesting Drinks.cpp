/*-----------------------|
| Author : Ashraf Tasin  |
| Date   : 07.08.2018    |
|-----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define all v.begin(),v.end()
using namespace std;

int main()
{
    ll n,q;
    vector <ll> v;
    cin >> n;

    for(ll i=0;i<n;i++)
    {
        ll a;
        cin >> a;
        v.pb(a);
    }

    sort(all);

    cin >> q;

    while(q--)
    {
        ll p;
        cin >> p;
        cout << lb(all,p+1)-v.begin() << endl;
    }

    return 0;
}
