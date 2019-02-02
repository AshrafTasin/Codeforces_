/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   03.02.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
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
    ll x;
    cin >> x;

    if(x==1 or x==2) cout << -1 << endl;

    else if(x%2==0)
    {
        ll m=x/2;
        ll n=1;

        ll a=m*m-n*n;
        ll b=2*m*n;
        ll c=m*m+n*n;

        if(a==x or b==x or c==x)
        {
            if(a==x) cout << b << " " << c << endl;
            else if(b==x) cout << a << " " << c << endl;
            else cout << a << " " << b << endl;
        }

        else cout << -1 << endl;
    }

    else
    {
        ll n=(x-1)/2;
        ll m=n+1;

        ll a=m*m-n*n;
        ll b=2*m*n;
        ll c=m*m+n*n;

        if(a==x or b==x or c==x)
        {
            if(a==x) cout << b << " " << c << endl;
            else if(b==x) cout << a << " " << c << endl;
            else cout << a << " " << b << endl;
        }

        else cout << -1 << endl;
    }

    return 0;
}
