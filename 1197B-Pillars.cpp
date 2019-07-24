/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   22.07.19   |
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
#define mx 100004
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
    flash
 
 
    int n;
    int l=INT_MIN;
    cin >> n;
 
    vector<int> v;
    vector<int> :: iterator it;
 
    for(int i=0;i<n;++i)
    {
        int x;
        cin >> x;
        v.pb(x);
        l=max(l,x);
    }
 
    it=find(all,l);
    int i=it-v.begin();
 
    bool f=0;
 
    for(int j=i-1;j>=1;--j)
    {
        if(v[j]>v[j-1]) continue;
        else return(cout << "NO" << endl,0);
    }
 
    for(int j=i+1;j<n-1;++j)
    {
         if(v[j]>v[j+1]) continue;
         else return(cout << "NO" << endl,0);
    }
 
    cout << "YES" << endl;
 
    return 0;
}