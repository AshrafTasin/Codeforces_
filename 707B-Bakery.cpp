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

int main()
{
    flash

    int node,edge,k;
    cin >> node >> edge >> k;
    vector< pair<int,int> > v[node+10];
    int ar[k+10];
    bool store[node+10]={0};

    v[0].pb({0,0});

    for(int i=1;i<=edge;++i)
    {
        ll a,b,c;
        cin >> a >> b >> c;
        v[a].pb({b,c});
        v[b].pb({a,c});
    }

    for(int i=1;i<=k;++i)
    {
        cin >> ar[i];
        store[ar[i]]=1;
    }

    ll ans=LLONG_MAX;

    for(int i=1;i<=k;++i)
    {
        int u=ar[i];
        int sz=v[u].size();

        if(sz==0) continue;
        ll ans1=LLONG_MAX;

        for(int j=0;j<sz;++j)
        {
            int x=v[u][j].first;

            if(!store[x])
            {
                int w=v[u][j].second;
                if(w<ans1) ans1=w;
            }
        }

        ans=min(ans,ans1);
    }

    if(ans==LLONG_MAX) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}


