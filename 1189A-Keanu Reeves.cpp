/*----------------------
/ Author : Ashraf Tasin |
/ Date   :   05.07.19   |
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
    int n,cnt0=0,cnt1=0;
    cin >> n;
    string s;
    cin >> s;

    for(int i=0;i<n;++i)
    {
        if(s[i]=='0') ++cnt0;
        else ++cnt1;
    }

    if(cnt0!=cnt1)
    {
        cout << 1 << endl << s << endl;
        return 0;
    }

    cout << 2 << endl;
    cout << s[0] << " ";
    for(int i=1;i<n;++i) cout << s[i];
    cout << endl;


    return 0;
}
