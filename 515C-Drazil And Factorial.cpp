/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   02.02.19   |
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

int main()
{
    int n;
    string s;

    cin >> n >> s;
    vector<int> v;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='1' or s[i]=='0') continue;

        else if(s[i]=='4')
        {
            v.pb(3);
            v.pb(2);
            v.pb(2);
        }

        else if(s[i]=='6')
        {
            v.pb(5);
            v.pb(3);
        }

        else if(s[i]=='8')
        {
             v.pb(7);
             v.pb(2);
             v.pb(2);
             v.pb(2);
        }

        else if(s[i]=='9')
        {
             v.pb(7);
             v.pb(3);
             v.pb(3);
             v.pb(2);
        }

        else v.pb(s[i]-'0');
    }

    sort(all,greater<int>());

    show;

    return 0;
}
