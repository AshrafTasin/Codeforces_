/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   25.07.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define mx 100008
#define endl "\n"
#define mnm pair<int,int>, vector< pair<int,int> >, greater< pair<int,int> >
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


ll cost[mx];
int par[mx];

int main()
{
    vector< pair<int,int> > v[mx];
    vector<int> path;
    stack<int> s;
    priority_queue< mnm > q;
    int node,edge,curv;
    scanf("%d%d",&node,&edge);

    for(int i=0;i<mx;i++) cost[i]= LLONG_MAX;

    for(int i=0;i<edge;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);

        v[a].pb(mp(b,c));
        v[b].pb(mp(a,c));
    }

    q.push(mp(0,1));
    par[1]=INT_MIN;
    cost[1]=0;

    while(!q.empty())
    {
        pair<int,int> cur=q.top();
        q.pop();
        int sz=v[cur.second].size();

        for(int i=0;i<sz;i++)
        {
            int child=v[cur.second][i].first;
            int w=v[cur.second][i].second;

            if(cost[cur.second]+w < cost[child])
            {
                cost[child]=cost[cur.second]+w;
                q.push(mp(cost[child],child));
                par[child]=cur.second;
            }
        }
    }

    curv=node;
    s.push(node);

    if(cost[node]==LLONG_MAX) return(printf("-1\n"),0);


    while(par[curv]!=INT_MIN)
    {
        s.push(par[curv]);
        curv=par[curv];
    }

    while(!s.empty())
    {
        printf("%d ",s.top());
        s.pop();
    }

    return 0;

}

