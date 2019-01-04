/*----------------------|
/ Author : Ashraf Tasin |
/ Date   : 30.07.2018   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;


int main()
{
    ll n,a,sum=0;
    vector <ll> v;
    cin >> n;

    for(ll i=0;i<n;i++)
    {
        cin >> a;
        sum+=a;
        v.pb(sum);
    }

    int o;
    cin >> o;

    for(ll i=1;i<=o;i++)
    {
        ll t;
        cin >> t;
        cout << lower_bound(v.begin(),v.end(),t)-v.begin()+1 << endl;
    }

    return 0;
}

