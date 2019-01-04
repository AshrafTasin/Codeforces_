/*-----------------------|
| Author : Ashraf Tasin  |
| Date   : 03.08.2018    |
|-----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;

int main()
{
    ll s2,s3,s5,s6,res;
    vector<int> v;
    cin >> s2 >> s3 >> s5 >> s6;

    v.pb(s2);
    v.pb(s5);
    v.pb(s6);

    sort(v.begin(),v.end());

    s2=s2-v[0];

    res=v[0]*256+min(s2,s3)*32;

    cout << res << endl;

    return 0;
}
