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
    int n,l=0,r=0,beauty_;
    cin >> n;
    vector< pair<int,int> > v;
    vector<int> beauty;

    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin >> x >> y;
        v.pb({x,y});
        l+=x;
        r+=y;
    }

    beauty_=abs(l-r);
    int temp_l,temp_r;

    for(int i=0;i<n;i++)
    {
       temp_l=l-v[i].first+v[i].second;
       temp_r=r-v[i].second+v[i].first;
       beauty.pb(abs(temp_l-temp_r));
    }

    if(*max_element(beauty.begin(),beauty.end())<=beauty_) cout << 0 << endl;

    else cout << max_element(beauty.begin(),beauty.end())-beauty.begin()+1 << endl;

    return 0;
}
