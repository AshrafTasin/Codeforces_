/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   31.01.19   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define flash ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define db double
#define endl "\n"
#define mx 500
#define mnm pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>
#define show for(int i=0;i<v1.size();i++) cout << v1[i] << " ";
using namespace std;


int dx[]={-1,1,-1,1};
int dy[]={-1,1,1,-1};

int main()
{
    int n,x=0;
    cin >> n;

    char g[mx][mx];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) cin >> g[i][j];
    }

    for(int i=0;i<n;i++)
    {
        for(int jj=0;jj<n;jj++)
        {
            int cnt=0;

            if(g[i][jj]=='X' or g[i][jj]=='X')
            {
                for(int j=0;j<4;j++)
                {
                    int nr=i+dx[j];
                    int nc=jj+dy[j];

                    if(nr>=0 and nc>=0 and nr<n and nc<n and (g[nr][nc]=='X' or g[nr][nc]=='x')) cnt++;
                }

                if(cnt==4) x++;
            }

        }
    }

    cout << x << endl;
    return 0;
}
