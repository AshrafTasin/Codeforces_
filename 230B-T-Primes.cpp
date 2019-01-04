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
    int n;
    cin >> n;

    bool pr[1000000];
    int x=1000000;
    memset(pr,0,sizeof(pr));
    pr[1]=1;

    for(int i=2;i*i<=x;i++)
    {
        if(pr[i]==0)
        {
            for(int j=i*2;j<=x;j+=i)
                pr[j]=1;
        }
    }



    while(n--)
    {
        ll i;
        cin >> i;

        ll j=sqrt(i);

        if(j*j==i && pr[j]==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
