/*-----------------------|
| Author : Ashraf Tasin  |
| Date   : 09.08.2018    |
|-----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define all v.begin(),v.end()
#define vs v.size()
#define allr r.begin(),r.end()
using namespace std;

int main()
{
    int a;
    double sum;
    vector<double>v;
    cin >> a;

    for(int i=1;i<=a;i++)
    {
        double p;
        cin >> p;
        v.pb(p);
    }

    sort(all);

    for(auto j=0;j<vs-2;j++)
    {
        sum=(v[j]+v[j+1]+v[j+2])/2;
        if(sum>v[j+2]) return(cout << "YES" << endl,0);
    }

    cout << "NO" << endl;

    return 0;
}
