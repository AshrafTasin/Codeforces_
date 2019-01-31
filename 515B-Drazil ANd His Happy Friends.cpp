/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   30.01.19   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define flash ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define db double
#define endl "\n"
#define mnm pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>
#define show for(int i=0;i<v1.size();i++) cout << v1[i] << " ";
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


bool arB[110];
bool arG[110];

int main()
{
    int boys,girls;
    cin >> boys >> girls;


    int num1;
    cin >> num1;

    for(int i=1;i<=num1;i++)
    {
        int x;
        cin >> x;
        arB[x]=1;
    }

    cin >> num1;

    for(int i=1;i<=num1;i++)
    {
        int x;
        cin >> x;
        arG[x]=1;
    }

    int loopvar_=max(boys,girls);

    for(int i=0;i<=loopvar_*loopvar_;i++)
    {
        if(arB[i%boys]==1 or arG[i%girls]==1)
        {
            arB[i%boys]=1;
            arG[i%girls]=1;
        }
    }

    for(int i=0;i<boys;i++)
    {
        if(arB[i]!=1) return(cout << "No" << endl,0);

    }


    for(int i=0;i<girls;i++)
    {
        if(arG[i]!=1) return(cout << "No" << endl,0);

    }

    cout << "Yes" << endl;

    return 0;
}
