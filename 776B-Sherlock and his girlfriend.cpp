/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   30.03.19   |
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

bool prime[100030];
ll n;

void sv()
{
    for(int i=2;i<=mx;i+=2) prime[i]=1;

    for(int i=3;i*i<=mx;i+=2)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=mx;j+=i) prime[j]=1;
        }
    }

    prime[2]=0;

    cout << 2 << endl;

    for(int i=2;i<=n+1;++i)
    {
        if(prime[i]) cout << 2 << " ";
        else cout << 1 << " ";
    }

    cout << endl;
}

int main()
{
    flash

    cin >> n;

    if(n==1) return(cout << 1 << endl << 1 << endl,0);
    if(n==2) return(cout << 1 << endl << 1 << " " << 1 << endl,0);

    sv();

    return 0;
}
