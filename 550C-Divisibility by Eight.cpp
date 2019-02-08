/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   05.02.18   |
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
    string s;
    vector<string> vs;
    cin >> s;

    for(int i=0;i<125;i++)
    {
        stringstream ss;
        ss << i*8;
        vs.pb(ss.str());
    }

    int sz=s.size();

    for(int i=0;i<125;i++)
    {
        string x=vs[i];
        int ss=x.size();
        int cnt=0;

        for(int j=0;j<sz;++j)
        {
            if(x[cnt]==s[j]) ++cnt;
            if(cnt==ss) return(cout << "YES" << endl << x << endl,0);

        }
    }

    cout << "NO" << endl;

    return 0;

}
