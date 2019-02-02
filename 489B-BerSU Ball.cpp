/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   02.02.19   |
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
    int n,m;
    cin >> n;

    vector<int> boy,girl;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        boy.pb(x);
    }

    cin >> m;

    for(int i=0;i<m;i++)
    {
        int x;
        cin >> x;
        girl.pb(x);
    }

    sort(boy.begin(),boy.end());
    sort(girl.begin(),girl.end());

    int res=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(abs(boy[i]-girl[j])<=1)
            {
                res++;
                boy[i]=INT_MAX;
                girl[j]=INT_MAX;
            }
        }
    }

    cout << res << endl;


    return 0;
}
