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

    int n;
    cin >> n;
    vector< pair<ll,ll> > v;

    for(int i=0;i<n;++i)
    {
        ll a,b;
        cin >> a >> b;
        v.pb({a,b});
    }

    sort(all);

    int ans=v[0].second;

    for(int i=0;i<n;++i)
    {
       if(ans<=v[i].second) ans=v[i].second;
       else ans=v[i].first;
    }

    cout << ans << endl;

     return 0;
}
