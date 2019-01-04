/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   04.01.19   |
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
#define show for(int i=0;i<v.size();i++) cout << v[i];
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
    vector<char> v;
    cin >> s;

    int sz=s.size();

    for(int i=0;i<s.size();)
    {
        if(s[i]=='.')
        {
            v.pb('0');
            i++;
        }

        else if(s[i]=='-' and s[i+1]=='.')
        {
            v.pb('1');
            i+=2;
        }

        else
        {
            v.pb('2');
            i+=2;
        }

    }

    show;

    return 0;
}
