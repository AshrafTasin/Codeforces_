/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   09.07.19   |
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

map<int,int> vis;

int main()
{
    int n,m;
    cin >> n >> m;

    if(m<=n) return(cout << n-m << endl,0);

    queue<int> q;
    vis[n]=0;
    q.push(n);

    while(!q.empty())
    {
        int cur=q.front();
        if(cur==m) return(cout << vis[cur] << endl,0);

        q.pop();

        int mul=cur*2;
        int mns=cur-1;

        if(vis.count(mul)==0 and mul<=10000)
        {
            vis[mul]=vis[cur]+1;
            q.push(mul);
        }

        if(vis.count(mns)==0 and mns>1)
        {
            vis[mns]=vis[cur]+1;
            q.push(mns);
        }
    }

    return 0;
}
