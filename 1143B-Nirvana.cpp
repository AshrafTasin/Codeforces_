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

int f(int x)
{
    int sum=1;
    while(x)
    {
        sum*=x%10;
        x/=10;
    }

    return sum;
}

int main()
{
    ll x;
    cin >> x;

    int b=1,ans=x;

    while(x)
    {
        int cur=(x-1)*b+(b-1);

        if(f(cur)>f(ans) or (f(cur)==f(ans) and cur>ans)) ans=cur;

        x/=10;
        b*=10;
    }

    cout << f(ans) << endl;

    return 0;
}
