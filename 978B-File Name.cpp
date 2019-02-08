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

    int n,ans=0;
    string s;
    cin >> n >> s;

    for(int i=0;i<n-2;++i)
    {
        if(s[i]=='x')
        {
            int cnt=0;

            for(int j=i+1;j<i+3;++j)
            {
                if(s[j]=='x') cnt++;
            }

            if(cnt==2) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}


