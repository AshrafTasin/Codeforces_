/*----------------------|
/ Author : Ashraf Tasin |
/ Date   : 29.07.2018   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;


int main()
{
    ll p=0,t,n,i;
    cin >> n;
    t=n;

    for(i=1;i<=n-1;i++)
    {
        p=p+i*(t-i);
    }
    p+=n;
    cout << p << endl;

    return 0;
}
