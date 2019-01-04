/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   03.11.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define endl "\n"
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
    vector<ll> v,v1;
    int num,base1,base2;
    cin >> num >> base1;

    for(int i=0;i<num;i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }

    cin >> num >> base2;

    for(int i=0;i<num;i++)
    {
        int x;
        cin >> x;
        v1.pb(x);
    }

    ll cum1=0,cum2=0;

    int j=0;

    for(int i=v.size()-1;i>=0;i--)
    {
        v[i]*=pow(base1,j);
        j++;
    }

    j=0;

    for(int i=v1.size()-1;i>=0;i--)
    {
        v1[i]*=pow(base2,j);
        j++;
    }

    for(int i=0;i<v.size();i++) cum1+=v[i];
    for(int i=0;i<v1.size();i++) cum2+=v1[i];

    if(cum1==cum2) cout << "=" << endl;
    else if(cum1<cum2) cout << "<" << endl;
    else cout << ">" << endl;

    return 0;

}
