/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   10.09.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;

int main()
{

    vector<ll> v;
    ll n,k;
    cin >> n >> k;

    for(ll i=1;i*i<=n;i++)
    {
        if(i*i==n) v.pb(i);

        else if(n%i==0)
        {
            v.pb(i);
            v.pb(n/i);
        }
    }

    sort(all);

    if(v.size()<k) cout << -1 << endl;
    else cout << v[k-1] << endl;

    return 0;
}
