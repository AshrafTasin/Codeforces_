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

int main()
{
    flash

    int n,left=0,right=0,cnt=0;
    cin >> n;

    bool ar[n+20];

    for(int i=0;i<n;++i)
    {
        bool x;
        cin >> x;
        ar[i]=x;
        if(ar[i]==0) ++left;
        else ++right;
    }

    if(left==0) return(cout << right << endl,0);
    else if(right==0) return(cout << left << endl,0);

    for(int i=0;i<n;++i)
    {
        if(ar[i]==0) --left;
        else --right;
        ++cnt;
        //cout << left << " " << right << endl;
        if(left==0 or right==0) break;

    }

    cout << cnt << endl;

    return 0;
}
