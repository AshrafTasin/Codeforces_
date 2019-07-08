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

	 ll a,b;
	 cin >> a >> b;

	 if(a==b) return(cout << a << " " << b << endl,0);
	
	 while(1)
	 {
	 	if(a==0 or b==0) break;

	 	if(a>=2*b)
	 	{
	 		ll x=b*2;
	 		ll tmp=a/x;
	 		a-=tmp*x;
	 	}

	 	else if(b>=2*a)
	 	{
	 		ll x=a*2;
	 		ll tmp=b/x;
	 		b-=tmp*x;
	 	}
	 	else break;
	 }

	 cout << a << " " << b << endl;

	return 0;
}