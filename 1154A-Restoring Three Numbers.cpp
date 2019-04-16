/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   16.04.19   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define flash ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define db double
#define endl "\n"
#define mnm pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
#define eps 1e-6
#define mx  1000002
using namespace std;


int main()
{
    vector<ll> v;
    for(int i=0;i<4;++i)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }

    sort(all,greater<ll>());

    cout << v[0]-v[1] << " " << v[0]-v[2] << " " << v[0]-v[3] << endl;

    return 0;
}
