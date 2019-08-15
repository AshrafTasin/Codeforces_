/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   27.07.19   |
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
#define mx 100004
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

ll cost[100006];
bool vis[1000006];
vector<int> v[1000006];
ll cst=0;


int dfs(int node)
{
    cst=min(cst,cost[node]);
    vis[node]=1;

    int sz=v[node].size();

    for(int i=0;i<sz;++i)
    {
        if(!vis[v[node][i]]) dfs(v[node][i]);
    }
}

int main()
{
    flash

    int n,m;
    cin >> n >> m;

    for(int i=1;i<=n;++i) cin >> cost[i];

    for(int i=0;i<m;++i)
    {
        int x,y;
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }

    ll ans=0;

    for(int i=1;i<=n;++i)
    {
        if(!vis[i])
        {
            cst=INT_MAX;
            dfs(i);
            ans+=cst;
        }

    }

    cout << ans << endl;

    return 0;

}
