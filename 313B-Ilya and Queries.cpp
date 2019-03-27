/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   25.03.19   |
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

    string s;
    cin >> s;
    int sz=s.size();
    int dp[sz+10][2];

    for(int i=0;i<1;++i)
    {
        dp[i][i]=0;
        for(int j=i+1;j<sz;++j)
        {
            if(s[j]==s[j-1]) dp[i][j]=dp[i][j-1]+1;
            else dp[i][j]=dp[i][j-1];

        }
    }

    int q;
    cin >> q;

    while(q--)
    {
        int l,r;
        cin >> l >> r;
        --l;--r;
        cout << dp[0][r]-dp[0][l] << endl;
    }

    return 0;

}
