/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   01.11.18   |
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
    set<db> s;
    int n;
    db x1,y1,x2,y2;

    cin >> n >> x1 >> y1;

    for(int i=0;i<n;i++)
    {
        cin >> x2 >> y2;

        if(x2-x1==0.00) s.insert(INT_MIN);
        else s.insert((y2-y1)/(x2-x1));
    }

    cout << s.size() << endl;

    return 0;
}
