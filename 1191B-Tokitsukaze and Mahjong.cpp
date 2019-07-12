/*----------------------
/ Author : Ashraf Tasin |
/ Date   :   12.07.19   |
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

    vector<string> v;
    string a,b,c;
    cin >> a >> b >> c;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    reverse(c.begin(),c.end());
    v.pb(a);
    v.pb(b);
    v.pb(c);

    sort(all);

    if(v[0]==v[1] and v[1]==v[2]) cout << 0 << endl;
    else if(v[1][1]-v[0][1]==1 and v[2][1]-v[1][1]==1 and v[0][0]==v[1][0] and v[1][0]==v[2][0]) cout << 0 << endl;
    else if(v[1][1]-v[0][1]<3 and v[0][0]==v[1][0]) cout << 1 << endl;
    else if(v[2][1]-v[1][1]<3 and v[2][0]==v[1][0]) cout << 1 << endl;
    else if(v[0][1]==v[1][1] and v[1][1]==v[2][1] and v[0][0]!=v[1][0] and v[0][0]!=v[2][0]) cout << 2 << endl;
    else if(v[0][1]==v[1][1] and v[1][1]==v[2][1] and v[0][0]==v[1][0] and v[0][0]==v[2][0])
    {
        int x=v[1][1]-v[0][1];
        int y=v[2][1]-v[1][1];

        if(x<3 or y<3) cout << 1 << endl;
        else cout << 2 << endl;
    }

    else cout << 2 << endl;

    return 0;
}
