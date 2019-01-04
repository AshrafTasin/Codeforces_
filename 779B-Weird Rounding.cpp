/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   06.09.18   |
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

int main()
{
    string s;
    int i,x,rmv=0,zero=0;

    cin >> s >> x;

    for(i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='0') zero++;
        if(zero==x) break;
    }

    if(zero<x) cout << s.size()-1 << endl;

    else cout << s.size()-i-x << endl;

    return 0;
}
