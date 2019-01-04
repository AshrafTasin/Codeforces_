/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   04.11.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define endl "\n"
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


int a[1115];

int main()
{
    int n,s,f,t;
    cin >> n >> s;


    for(int i=0;i<n;i++)
    {
        cin >> f >> t;
        a[f]=max(a[f],t);
    }

    int ans=0,time=0;

    for(int i=s;i>0;i--)
    {
        if(a[i]>=time)ans+=a[i]-time;
        time=++ans;
    }

    cout << ans << endl;

    return 0;
}


