/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   17.02.19   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define flash ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
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

    ll n,cnt=0;
    cin >> n;

    if(n%2==0) return(cout << n/2 << endl,0);

    while(n)
    {
        ll nn=n;
        if(nn%2==0) return(cout << nn/2+cnt << endl,0);
        ll x=sqrt(n+1);

        vector< pair<int,int> > v;

        for(int i=1;i<=x;++i)
        {
            if(nn%i==0) v.pb({i,nn/i});
        }

        if(v.size()!=1) {n-=v[1].first; cnt++;}
        else return(cout << ++cnt << endl,0);
    }

    return 0;

}
