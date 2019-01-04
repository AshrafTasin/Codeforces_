/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   02.11.18   |
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

ll a[500005];
int b[500005];

int main()
{

    int n;
    cin >> n;

    ll sum=0;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        sum+=a[i];
    }

    if(sum%3==0)
    {
        sum/=3;
        ll s=0;
        ll cnt=0,ans=0;

        for(int i=0;i<n-1;i++)
        {
            s+=a[i];

            if(s==2*sum) ans+=cnt;

            if(s==sum) cnt++;
        }

        cout << ans << endl;
    }

    else cout << 0 << endl;

    return 0;
}

