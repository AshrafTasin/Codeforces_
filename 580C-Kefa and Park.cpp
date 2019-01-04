/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   05.11.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define endl "\n"
#define MAX 10000001
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


int Cat[MAX];
bool vis[MAX];
vector<vector<int> > graph(MAX);
int n , m , ans = 0;


void dfs(int u , int scat)
{
    int sum = 0;
    vis[u] = true;
    if(scat > m)
        return;

    bool ok = false;
    for(int v = 0 ; v < graph[u].size() ; v++)
    {
        if(!vis[graph[u][v]])
        {

            Cat[graph[u][v]] ? sum = scat + 1 : sum = 0;
            dfs(graph[u][v] , sum);
            ok = true;
        }
    }

    if(!ok) ans++;

}


int main()
{
    int x , y;
    cin >> n >> m;

    for(int i = 1 ; i <= n ; i++) cin >> Cat[i];

    for(int i = 1; i < n ; i++)
    {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }


    dfs(1,Cat[1]);
    cout << ans << endl;

    return 0;
}
