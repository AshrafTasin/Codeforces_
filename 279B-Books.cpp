/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   16.04.19   |
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

	ll n,t,sum=0,beg=0,res=INT_MIN;
	cin >> n >> t;
	ll ar[n+10];

	for(int i=0;i<n;++i)
	{
		cin >> ar[i];
		sum+=ar[i];
		if(t-sum<0)
		{
			sum=sum-ar[beg];
			res=max(res,i-beg);
			++beg;
		}
		else if(t-sum==0)
		{
			sum=sum-ar[beg];
			res=max(res,i-beg+1);
			++beg;			
		}
	}

	if(n==1)
	{
		 if(t<ar[0]) cout << 0 << endl;
		 else cout << 1 << endl;
		 return 0;
	} 

	 cout << max(res,n-beg) << endl;

	return 0;
}