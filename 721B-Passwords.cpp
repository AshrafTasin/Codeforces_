/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   12.04.19   |
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
#define mx  2020
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

	map<int,int> m;
	map<int,int> :: iterator it;

	int n,k,best=0,worst=0,sz;
	string x;

	cin >> n >> k;

	for(int i=0;i<n;++i)
	{
		string s;
		cin >> s;
		m[s.size()]++;
	}

	cin >> x;
	sz=x.size();

	for(it=m.begin();it!=m.end();++it)
	{
		if(it->first==sz)
		{
			++best;
			worst+=it->second;
			break;
		}

		else
		{
			best+=it->second;
			worst+=it->second;
		}
	}

	if(n==1) return(cout << 1 << " " << 1 << endl,0);
	if(k==1) return(cout << best+(best-1)*5 << " " << worst+(worst-1)*5 << endl,0);

	if(worst<=k) worst=worst;
	else if(worst%k==0) worst=worst+((worst/k)-1)*5;
	else worst=worst+(worst/k)*5;

	if(best<=k) best=best;
	else if(best%k==0) best=best+((best/k)-1)*5;
	else best=best+(best/k)*5;

	cout << best << " " << worst << endl;


	return 0;
}
