/*----------------------
/ Author : Ashraf Tasin |
/ Date   :   03.07.19   |
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

    int n,k;
    cin >> n >> k;

    ll ar[n+10];

    for(int i=0;i<n;++i) cin >> ar[i];
    sort(ar,ar+n);

    if(k==0)
    {
        if(ar[0]!=1) cout << ar[0]-1 << endl;
        else cout << -1 << endl;
        return 0;
    }

    if(k==n)
    {
        cout << ar[n-1] << endl;
        return 0;
    }

    else
    {
        if(ar[k-1]==ar[k]) cout << -1 << endl;
        else cout << ar[k-1] << endl;
    }

    return 0;
}
