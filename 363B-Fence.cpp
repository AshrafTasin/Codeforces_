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

    int n,k,res=INT_MAX,r=0,cnt=0,sum=0;
    cin >> n >> k;

    int ar[n+100];

    for(int i=0;i<=n;++i)
    {
        int x;
        if(cnt>=k)
        {
            if(sum<res) {res=sum;r=i-k+1;}
            sum-=ar[i-k];
        }
        if(i==n) break;

        cin >> x;
        ar[i]=x;
        sum+=x;
        ++cnt;
    }

    cout << r << endl;
    return 0;

}
