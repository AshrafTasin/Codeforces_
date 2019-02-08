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
    string s1,s2;
    int v=0,c=0,vv=0,cc=0;

    cin >> s1 >> s2;

    int sz=s1.size();
    int ss=s2.size();

    if(sz!=ss) return(cout << "No" << endl,0);


    for(int i=0;i<sz;i++)
    {
        if( (s1[i]=='a' or s1[i]=='e' or s1[i]=='i' or s1[i]=='o' or s1[i]=='u') and (s2[i]!='a' and s2[i]!='e' and s2[i]!='i' and s2[i]!='o' and s2[i]!='u') ) return(cout << "No" << endl,0);

    }

    for(int i=0;i<ss;i++)
    {
        if( (s2[i]=='a' or s2[i]=='e' or s2[i]=='i' or s2[i]=='o' or s2[i]=='u') and (s1[i]!='a' and s1[i]!='e' and s1[i]!='i' and s1[i]!='o' and s1[i]!='u') ) return(cout << "No" << endl,0);
    }

    cout << "Yes" << endl;

    return 0;
}
