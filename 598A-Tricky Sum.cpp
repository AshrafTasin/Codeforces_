/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   31.10.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
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
    int t;
    cin >> t;

    while(t--)
    {
        ll a=0,n,b=1;
        cin >> n;

        a=n*(n+1)/2;

        for(int i=2;i<=n;i*=2) b+=i;

        a-=b*2;
        cout << a << endl;
    }

    return 0;

}
