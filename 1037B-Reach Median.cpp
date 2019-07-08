/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   17.04.19   |
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
#define mx  2000002
using namespace std;


/*King  Moves

int dx[]={-1,1,-1,0,1,-1,0,1};
int dy[]={0,0,-1,-1,-1,1,1,1};    */

/*Knight Moves

int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 }; */

/*Normal Moves*/

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	flash

	ll n,s;
	cin >> n >> s;
	ll ar[n+10];

	for(int i=0;i<n;++i) cin >> ar[i];
	sort(ar,ar+n);
	
	if(ar[n/2]==s) return(cout << 0 << endl,0);

	if(ar[n/2]>s)
	{
		ll cnt=s-ar[n/2];

		for(int i=(n/2)-1;i>=0;--i)
		{
			if(ar[i]>=s) cnt+=s-ar[i];
			else break;
		}

		cout << abs(cnt) << endl;
	}

	else
	{
		ll cnt=s-ar[n/2];

		for(int i=(n/2)+1;i<n;++i) 
		{
			if(ar[i]<=s) cnt+=s-ar[i];
			else break;
		}

		cout << abs(cnt) << endl;
	}

	return 0;
}