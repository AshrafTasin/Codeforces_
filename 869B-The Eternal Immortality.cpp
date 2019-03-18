/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   09.02.19   |
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


int main()
{
    ll x,y;
    cin >> x >> y;

    ll res=abs(x-y);

    if(res>=5) return(cout << 0 << endl,0);

    stringstream ss;
    ss << y;
    string s=ss.str();

    int xx=s[s.size()-1]-'0';
    int ans=1;

    for(int i=1;i<=res;++i)
    {
        ans*=xx;
        --xx;
    }

    stringstream sos;
    sos << ans;
    string s1=sos.str();

    cout << s1[s1.size()-1] << endl;

    return 0;
}


