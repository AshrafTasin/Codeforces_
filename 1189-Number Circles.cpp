/*----------------------
/ Author : Ashraf Tasin |
/ Date   :   05.07.19   |
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
    int n;
    cin >> n;
    ll ar[n+10];

    for(int i=0;i<n;++i) cin >> ar[i];
    sort(ar,ar+n);

    if(ar[n-2]+ar[0]<=ar[n-1]) swap(ar[n-1],ar[n-2]);

    if(ar[n-2]+ar[0]>ar[n-1] and ar[n-1]+ar[1]>ar[0] and ar[n-1]+ar[n-3]>ar[n-2])
    {
        cout << "YES" << endl;
        for(int i=0;i<n;++i) cout << ar[i] << " ";
        cout << endl;
        return 0;
    }

    else cout << "NO" << endl;

    return 0;
}
