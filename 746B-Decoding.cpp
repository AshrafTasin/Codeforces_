/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   29.03.19   |
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
    int n,prev,next,cnt=1;
    string s;
    cin >> n >> s;
    char ans[n+1];

    if(n==1) return(cout << s << endl,0);

    if(n%2==0)
    {
        prev=(n/2)-1;
        ans[prev]=s[0];
        next=n/2;
        int x=1;
        int cnt=2;

        for(int i=1;i<n;++i)
        {
            if(cnt%2==0) prev+=x;
            else prev-=x;

            ans[prev]=s[i];
            ++cnt;
            ++x;
        }

        for(int i=0;i<n;++i) cout << ans[i];
        cout << endl;
    }

    else
    {
        prev=(n/2);
        ans[prev]=s[0];
        next=n/2;
        int x=1;
        int cnt=2;

        for(int i=1;i<n;++i)
        {
            if(cnt%2==0) prev-=x;
            else prev+=x;

            ans[prev]=s[i];
            ++cnt;
            ++x;
        }

        for(int i=0;i<n;++i) cout << ans[i];
        cout << endl;
    }

    return 0;
}
