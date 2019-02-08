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
#define mod 1000000007
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


ll mmod(ll x)
{
    ll y=x;
    x=(x/mod)-1;

    if(((-1)*x*mod+y)%mod==0) return 0;

    return (-1)*x*mod+y;

}


int main()
{
    flash

    ll n,x,y;
    ll ar[20000];

    cin >> x >> y >> n;
    ar[1]=x;
    ar[2]=y;

    for(int i=3;i<=9;++i)
    {
        ar[i]=ar[i-1]-ar[i-2];
    }

    if(n%6==1)
    {
        if(ar[1]>=0) cout << ar[1]%mod << endl;
        else cout << mmod(ar[1]) << endl;
    }

    else if(n%6==2)
    {
        if(ar[2]>=0) cout << ar[2]%mod << endl;
        else cout << mmod(ar[2]) << endl;
    }

    else if(n%6==3)
    {
        if(ar[3]>=0) cout << ar[3]%mod << endl;
        else cout << mmod(ar[3]) << endl;
    }

    else if(n%6==4)
    {
        if(ar[4]>=0) cout << ar[4]%mod << endl;
        else cout << mmod(ar[4]) << endl;
    }

    else if(n%6==5)
    {
        if(ar[5]>=0) cout << ar[5]%mod << endl;
        else cout << mmod(ar[5]) << endl;
    }

    else if(n%6==0)
    {
        if(ar[6]>=0) cout << ar[6]%mod << endl;
        else cout << mmod(ar[6]) << endl;
    }


    return 0;
}


