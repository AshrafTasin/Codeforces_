/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   06.04.19   |
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

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	flash

	int n;
	cin >> n;
	int ar[n+100];

	int cnt=0,ans=INT_MIN,ans1=INT_MIN;

	for(int i=0;i<n;++i) cin >> ar[i];

	for(int i=0;i<n-1;++i)
	{
		if(ar[i]!=ar[n-1]) {ans=n-1-i;break;}
	}

	for(int i=n-1;i>0;--i)
	{
		if(ar[i]!=ar[0]) {ans1=i;break;}
	}

	cout << max(ans,ans1) << endl;

	return 0;
}
