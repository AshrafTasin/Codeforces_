/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   08.07.19   |
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

    int n,m;
    cin >> n >> m;
    ll ar[n+10];
    vector<ll> v;

    for(int i=0;i<n;++i) cin >> ar[i];
    sort(ar,ar+n);

    ll ans=0;
    bool flag=0;
    int j=1;

    for(int i=0;i<n;++i)
    {
        for(;j<ar[i];++j)
        {
            ans+=j;
            if(ans<=m) v.pb(j);

            if(ans>m)
            {
                flag=1;
                ans-=j;
                break;
            }
        }

        if(flag) break;

        j=ar[i]+1;
    }

    j=ar[n-1]+1;

    if(m-ans>ar[n-1])
    {
        for(;;)
        {
            if(ans+j<=m)
            {
                v.pb(j);
                ans+=j;
                ++j;
            }

            else break;
        }
    }

    ll k=v.size();
    cout << k << endl;
    for(int x=0;x<k;++x) cout << v[x] << " ";
    cout << endl;

    return 0;
}
