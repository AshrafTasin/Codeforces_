/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   22.07.19   |
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
 
 
    int tc;
    cin >> tc;
 
    while(tc--)
    {
        int n;
        cin >> n;
 
        vector<int> v;
 
        for(int i=0;i<n;++i)
        {
            int x;
            cin >> x;
            v.pb(x);
        }
 
        if(n==2)
        {
            cout << 0 << endl;
            continue;
        }
 
        sort(all,greater<int>());
 
        int ans=0;
        int x=v[1];
 
        for(int i=2;i<n;++i)
        {
            if(v[i]<=x) ++ans;
        }
 
        if(ans>=v[1]-1) cout << v[1]-1 << endl;
        else cout << ans << endl;
    }
 
    return 0;
}