/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   20.01.19   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define flash ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define db double

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
    int n;
    cin >> n;

    vector<int> v;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }

    //if(n==2) return(cout << (v[0]+v[1])*(v[0]+v[1]) << endl,0);

    sort(all);

    ll ans=0,j=n-1;

    for(int i=0;i<n/2;i++)
    {
        ans+=(v[i]+v[j])*(v[i]+v[j]);
        j--;
    }

    cout << ans << endl;

    return 0;
}
