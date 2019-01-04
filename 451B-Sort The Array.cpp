/*-----------------------|
| Author : Ashraf Tasin  |
| Date   : 14.08.2018    |
|-----------------------*/

#include<bits/stdc++.h>
#define ll long long
#define all v.begin(),v.end()
#define pb push_back
using namespace std;

int main()
{
    int n,i,j;
    vector<ll> v,v1;
    cin >> n;

    for(int ii=0;ii<n;ii++)
    {
        ll a;
        cin >> a;
        v.pb(a);
    }

    v1=v;

    sort(all);

    if(v1==v) return(cout << "yes" << endl << 1 << " " << 1 << endl,0);

    for(i=n-1;i>=0;i--)
    {
        if(v[i]!=v1[i]) break;
    }

    for(j=0;j<n;j++)
    {
        if(v[j]!=v1[j]) break;
    }

    reverse(v1.begin()+j,v1.begin()+i+1);

    if(v1==v) return(cout << "yes"  << endl << j+1 << " " << i+1 << endl,0);
    cout << "no" << endl;


    return 0;
}
