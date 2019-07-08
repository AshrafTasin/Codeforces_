/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   08.07.19   |
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

    int n,m;
    cin >> n >> m;

    if(n==m or n==(n+m)/2)
    {
        for(int i=0;i<n+m;++i)
        {
            if(i%2==0) cout << 1;
            else cout << 0;
        }

        cout << endl;

        return 0;
    }


    if(n==m+1)
    {
        for(int i=0;i<n+m;++i)
        {
            if(i%2==0) cout << 0;
            else cout << 1;
        }

        cout << endl;

        return 0;
    }


    if(n<(n+m)/3 or n>m) return(cout << -1 << endl,0);
    int zero=n;
    int one=m;
    bool flag=0;

    for(int i=0;i<n+m;++i)
    {
        if((i+1)%3==0)
        {
            cout << 0;
            --zero;
        }
        else
        {
            cout << 1;
            --one;
        }

        if(zero==one)
        {
            if((i+1)%3==0) flag=0;
            else flag=1;
            break;
        }
    }

    for(int i=0;i<zero+one;++i)
    {
        if(!flag)
        {
            if(i%2==0) cout << 1;
            else cout << 0;
        }

        else
        {
            if(i%2==0) cout << 0;
            else cout << 1;
        }
    }

    cout << endl;

    return 0;
}
