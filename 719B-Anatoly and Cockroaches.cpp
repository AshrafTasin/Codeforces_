/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   03.11.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define endl "\n"
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
    int n,r=0,b=0;
    string s;
    cin >> n >> s;

    for(int i=1;i<s.size();i+=2)
    {
        if(s[i]!='b') r++;
    }

    for(int i=0;i<s.size();i+=2)
    {
        if(s[i]!='r') b++;
    }

    int mx=max(r,b);

    r=0,b=0;

    for(int i=1;i<s.size();i+=2)
    {
        if(s[i]!='r') r++;
    }

    for(int i=0;i<s.size();i+=2)
    {
        if(s[i]!='b') b++;
    }

    int mxx=max(r,b);

    cout << min(mx,mxx) << endl;

    return 0;

}

