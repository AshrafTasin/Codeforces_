/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   30.03.19   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v1.begin(),v1.end()
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

    ll n;
    cin >> n;

    map<ll,ll> m;
    vector<ll> v1;
    set<ll> s;

    for(int i=0;i<n;++i)
    {
        ll x;
        cin >> x;
        m[x]++;
    }

    map<ll,ll> :: iterator it;

    for(it=m.begin();it!=m.end();++it)
    {
        if(it->second>2) return(cout << "NO" << endl,0);
        else if(it->second==1) v1.pb(it->first);
        else{v1.pb(it->first);s.insert(it->first);}
    }

    sort(all,greater<ll>());
    cout << "YES" << endl << s.size() << endl;
    set<ll> :: iterator i;
    for(i=s.begin();i!=s.end();++i) cout << *i << " ";
    cout << endl;
    cout << v1.size() << endl;
    for(int i=0;i<v1.size();++i) cout << v1[i] << " ";
    cout << endl;


    return 0;
}
