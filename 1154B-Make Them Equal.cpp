/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   17.04.19   |
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
#define mx  2000002
using namespace std;


/*King  Moves

int dx[]={-1,1,-1,0,1,-1,0,1};
int dy[]={0,0,-1,-1,-1,1,1,1};    */

/*Knight Moves

int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 }; */

/*Normal Moves

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};*/


int main()
{
    flash

    int n,a,b,c;
    cin >> n;
    set<int> s;
    set<int> :: iterator it;

    for(int i=0;i<n;++i)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    int sz=s.size();
    if(sz==1) return(cout << 0 << endl,0);
    if(sz>3) return(cout << -1 << endl,0);
    if(sz==2)
    {
        it=s.begin();
        a=*it;
        ++it;
        b=*it;
        if((b-a)%2==0) cout << (b-a)/2 << endl;
        else cout << b-a << endl;
        return 0;
    }

    if(sz==3)
    {
        it=s.begin();
        a=*it;
        ++it;b=*it;++it;c=*it;
        if(b-a==c-b) cout << b-a << endl;
        else cout << -1 << endl;
        return 0;
    }

}
