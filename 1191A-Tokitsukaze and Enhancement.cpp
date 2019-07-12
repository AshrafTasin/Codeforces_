/*----------------------
/ Author : Ashraf Tasin |
/ Date   :   12.07.19   |
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
    cin >> n;

    int a=n%4;
    int b=(n+1)%4;
    int c=(n+2)%4;

    if(a==1 or b==1 or c==1)
    {
        if(a==1) cout << 0 << " " << "A" << endl;
        else if(b==1) cout << 1 << " " << "A" << endl;
        else cout << 2 << " " << "A" << endl;
    }

    else if(a==3 or b==3 or c==3)
    {
        if(a==3) cout << 0 << " " << "B" << endl;
        else if(b==3) cout << 1 << " " << "B" << endl;
        else cout << 2 << " " << "B" << endl;
    }

    else if(a==2 or b==2 or c==2)
    {
        if(a==2) cout << 0 << " " << "C" << endl;
        else if(b==2) cout << 1 << " " << "C" << endl;
        else cout << 2 << " " << "C" << endl;
    }

    else
    {
        if(a==0) cout << 0 << " " << "D" << endl;
        else if(b==0) cout << 1 << " " << "D" << endl;
        else cout << 2 << " " << "D" << endl;
    }

    return 0;
}
