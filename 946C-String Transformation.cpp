/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   18.04.19   |
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

    string s;
    cin >> s;
    int sz=s.size();
    if(sz<26) return(cout << -1 << endl,0);

    int i=0;
    bool f=0;

    for(;i<sz;++i)
    {
        if(s[i]=='a') {f=1;break;}
    }

    if(!f) return(cout << -1 << endl,0);
    if(sz-i<=25) return(cout << -1 << endl,0);

    char p='b';
    ++i;
    int cnt=0;

    for(;i<sz;++i)
    {
        if(s[i]==p)
        {
            ++p;
            ++cnt;
        }
        else if(s[i]<p)
        {
            s[i]=p;
            ++p;
            ++cnt;
        }

        if(cnt>=25) return(cout << s << endl,0);
    }

    cout << -1 << endl;

    return 0;
}

