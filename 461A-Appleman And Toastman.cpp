/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   01.11.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define show for(int i=0;i<sum.size();i++) cout << sum[i] << " ";
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
    vector<ll> v,sum;
    sum.pb(0);
    int n;
    ll cnt=0;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }

    sort(all,greater<int>());

    for(int i=0;i<v.size();i++) sum.pb(sum[i]+v[i]);

    if(n==1) return(cout << sum[1] << endl,0);

    if(n==2) return(cout << sum[2]*2 << endl,0);

    for(int i=2;i<sum.size()-1;i++) cnt+=sum[i];

    cout << cnt+sum[sum.size()-1]*2 << endl;

   // show;

    return 0;
}
