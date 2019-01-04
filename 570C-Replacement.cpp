/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   11.11.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
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
	string s;
	int n, m, q, indx,cnt=0;
    char ch;

    vector<int> v;

	cin >> n >> m >> s;

	for (int i=1;i<n;i++)  cnt += ((s[i] == s[i - 1]) && (s[i] == '.'));

	for (int i=0;i<m;i++)
    {
		cin >> indx >> ch;
		indx--;

		if (s[indx] != '.' && ch == '.') cnt += (s[indx - 1] == ch) + (s[indx + 1] == ch);
		if (s[indx] == '.' && ch != '.') cnt -= (s[indx - 1] == '.') + (s[indx + 1] == '.');
		cout << cnt << endl;
		s[indx] = ch;
	}

	return 0;
}
