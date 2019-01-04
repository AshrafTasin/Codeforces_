/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   28.10.18   |
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
    //set<char> ss;
    cin >> s;

    //for(int i=0;i<s.size();i++) ss.insert(s[i]);

    //if(s.size()>1 and ss.size()==1) cout << (s.size()+1)*25 << endl;

    cout << (s.size()+1)*26-s.size() << endl;

    return 0;
}
