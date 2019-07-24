/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   16.07.19   |
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
#define mx 150007
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
	#ifndef ONLINE_JUDGE
    	freopen("in.txt","r",stdin);
    	freopen("out.txt","w",stdout);
    #endif
   
    flash 

    bool f,f1;
    int n;
    cin >> n;
    
    while(n--)
    {
        string s,t,p;
        cin >> s >> t >> p;
        map<char,int>m,m1;
        int x=0;
        int sz=s.size();
        int sz1=p.size();

        for(int i=0;i<t.size();i++)
        {
            m[t[i]]++;
            if(t[i]==s[x] && x<s.size()) ++x;
        }

        if(x!=sz)
        {
            cout<<"NO"<<endl;
            continue;
        }

        f=1;
        for(int i=0;i<sz;i++) ++m1[s[i]];
        for(int i=0;i<sz1;i++) ++m1[p[i]];
       
        for(char a='a';a<='z';a++)
        {
            if(m[a]>m1[a]) f=0;
        }

        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}