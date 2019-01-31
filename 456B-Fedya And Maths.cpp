/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   30.01.19   |
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
#define show for(int i=0;i<v1.size();i++) cout << v1[i] << " ";
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
    cin >> s;

    if(s.size()==1)
    {
        if((s[0]-'0')%4==0) cout << 4 << endl;
        else cout << 0 << endl;
    }

    else
    {
        if( ((s[s.size()-1]-'0') + ((s[s.size()-2]-'0')*10) ) %4==0) cout << 4 << endl;
        else cout << 0 << endl;
    }

    return 0;
}
