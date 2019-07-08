/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   07.07.19   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define flash ios :: sync_with_stdio(false); cin.tie(NULL);
#define db double
#define endl "\n"
#define mnm pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;


/*King  Moves

int dx[]={-1,1,-1,0,1,-1,0,1};
int dy[]={0,0,-1,-1,-1,1,1,1};    */

/*Knight Moves

int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 }; */

/*Normal Moves

int x[] = {0, 1, 0, -1};
int y[] = {-1, 0, 1, 0}; */

int main()
{
    flash

    ll n,ans=0;
    cin >> n;
    ll x=n;
    ll ar[n+10],ar1[n+10];

    for(ll i=0;i<n;++i)
    {
        cin >> ar[i];
        ar1[i]=x--;
    }

    sort(ar,ar+n,greater<ll>());

    for(int i=0;i<n;++i) ans+=max(ar[i],ar1[i])-min(ar[i],ar1[i]);
    cout << ans << endl;


    return 0;
}
