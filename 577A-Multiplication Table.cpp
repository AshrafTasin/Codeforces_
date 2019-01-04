/*-----------------------|
| Author : Ashraf Tasin  |
| Date   : 08.08.2018    |
|-----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define all v.begin(),v.end()
#define allr r.begin(),r.end()
using namespace std;

int main()
{
    ll n,x,cnt=0;
    cin >> n >> x;

    for(ll i=1;i<=n;i++)
    {
        if(x%i==0 && (x/i)<=n) cnt++;
    }

    cout << cnt << endl;

    return 0;
}

