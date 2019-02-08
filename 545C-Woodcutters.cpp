/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   08.02.19   |
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

    vector< pair<ll,ll> > v;
    int n;
    cin >> n;

    if(n==1) return(cout << 1 << endl,0);

    for(int i=0;i<n;++i)
    {
        ll a,b;
        cin >> a >> b;
        v.pb({a,b});
    }

    int cnt=1;

    for(int i=1;i<n-1;i++)
    {
        if( (v[i].first-v[i].second)>v[i-1].first) cnt++;
        else if((v[i].first+v[i].second)<v[i+1].first) {cnt++; v[i].first=v[i].first+v[i].second;}
    }

    cout << ++cnt << endl;
    return 0;
}


