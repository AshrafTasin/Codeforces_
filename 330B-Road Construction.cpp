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

    int n,m;
    cin >> n >> m;
    bool flag[n+20]={0};

    while(m--)
    {
        int x,y;
        cin >> x >> y;
        flag[x]=1;
        flag[y]=1;
    }

    int ans=0;

    for(int i=1;i<=n;++i)
    {
        if(flag[i]==0)
        {
            ans=i;
            break;
        }
    }

    cout << n-1 << endl;

    for(int i=1;i<=n;++i)
    {
        if(i==ans) continue;
        else cout << ans << " " << i << endl;
    }

    return 0;
}
