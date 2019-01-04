/*-----------------------|
| Author : Ashraf Tasin  |
| Date   : 08.08.2018    |
|-----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define all v.begin(),v.end()
#define allr r.begin(),r.end()
using namespace std;

int main()
{
    ll n;
    cin >> n;

    if(n==0) cout << 1 << endl;
    else if(n%4==0) cout << 6 << endl;
    else if(n%2==0 && (n/2)%2!=0) cout << 4 << endl;
    else if((n-1)%4==0) cout<< 8 << endl;
    else cout << 2 << endl;

    return 0;
}
