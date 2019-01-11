/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   09.01.19   |
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
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;



int main()
{
    int x;
    cin >> x;

    ll y=(x*(x+1))/2;

    if(y%2==0) cout << 0 << endl;
    else cout << 1 << endl;

    return 0;

}
