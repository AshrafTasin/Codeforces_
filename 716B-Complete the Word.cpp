/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   07.11.18   |
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


bool check[26];


void solve()
{
    for(int j=0;j<26;j++)
    {
        if(check[j]==0)
        {
            cout<<(char)(j+65);
            check[j]=1;
            break;
        }
    }

}



int main()
{
   string s;
   int i,j;

   cin >> s;

   if(s.length()<26) return(cout << -1 << endl,0);

   for(i=0;i+25<s.length();i++)
   {
        for(int i=0;i<26;i++) check[i]=0;

        for(j=i;j<26+i;j++)
        {
            if(s[j]=='?') continue;
            if(check[(int)s[j]-65]) break;

            check[(int)s[j]-65]=1;
        }

        if(j==26+i) break;
   }

   if(i+25==s.length()) return(cout << -1 << endl,0);


   for(j=0;j<s.length();j++)
   {
        if(j<i || j>i+25)
        {
            if(s[j]=='?') cout<<'A';
            else cout << s[j];
            continue;
        }

        if(s[j]=='?') solve();

        else cout<<s[j];
   }

    return 0;
}

