/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   04.01.19   |
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
#define show for(int i=0;i<v.size();i++) cout << v[i];
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


vector<int> v;
bool prime[58];

void sv()
{
    for(int i=2;i<=50;i++)
    {
        if(prime[i]==false)
        {
            v.pb(i);
            for(int j=i*2;j<=50;j+=i) prime[j]=true;
        }
    }

    prime[1]=true;
}


int main()
{
    sv();

    int a,b,sz=v.size();
    cin >> a >> b;

    for(int i=0;i<sz-1;i++)
    {
        if(v[i]==a and v[i+1]==b) return(cout << "YES" << endl,0);
    }

    cout << "NO" << endl;

    return 0;
}
