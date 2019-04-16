/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   31.03.19   |
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

    int n;
    cin >> n;

    while(n--)
    {
        string s;
        set<char> ss;
        cin >> s;
        int sz=s.size();

        if(sz==1) {cout << "Yes" << endl;continue;}

        for(int i=0;i<sz;++i) ss.insert(s[i]);

        if(ss.size()!=sz) {cout << "No" << endl;continue;}

        vector<int> v;

        for(int i=0;i<sz;++i) v.pb(s[i]-'a');
        sort(all);

        int cnt=0;
        for(int i=0;i<v.size()-1;++i)
        {
            if(abs(v[i]-v[i+1])==1) ++cnt;
        }


        if(cnt==v.size()-1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
