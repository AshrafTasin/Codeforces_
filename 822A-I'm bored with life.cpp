/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   18.01.19   |
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


ll facto(ll n)
{
    if(n==0 or n==1) return 1;

    ll fact[18]={0};

    fact[0]=1;

    for(int i=1;i<=n;i++) fact[i]=fact[i-1]*i;

    return fact[n];

}

int main()
{
    ll a,b;
    cin >> a >> b;

    cout << facto(min(a,b)) << endl;

    return 0;
}



