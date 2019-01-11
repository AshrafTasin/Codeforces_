/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   12.01.19   |
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
    string s,s1;
    cin >> s;

    int i;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='[')
        {
            i++;
            break;
        }

    }

    if(i==s.size()) return(cout << -1 << endl,0);

    //cout << i << endl;
    //cout << s1 << endl;

    for(;i<s.size();i++)
    {
        if(s[i]==':')  break;
    }

    if(i==s.size()) return(cout << -1 << endl,0);

    //cout << i << endl;
    //cout << s1 << endl;

    int j;

    for(j=s.size()-1;j>i;j--)
    {
        if(s[j]==']')
        {
            j--;
            break;
        }
    }

    if(j==i) return(cout << -1 << endl,0);

    for(;j>i;j--)
    {
        if(s[j]==':')
        {
            j--;
            break;
        }
    }

    if(j==i) return(cout << -1 << endl,0);
    i++;

    int cnt=0;
    for(;i<=j;i++)
    {
        if(s[i]=='|') cnt++;
    }

    cout << cnt+4 << endl;
    return 0;

}
