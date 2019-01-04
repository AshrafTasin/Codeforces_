#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int cnt=0;


long long int z(long long int n)
{
    int one=0;
    while(n)
    {
        if(n%2!=0) one++;
        n=n/2;
    }

    return one;
}

int main()
{
    long long int i,n,m,k,p,y,b;
    vector<long long int> v;
    cin >> n >> m >> k;


    while(m--)
    {
        long long int x;
        cin >> x;
        v.pb(x);
    }
    cin >> y;


    for(i=0;i<v.size();i++)
    {
      b=z(v[i]^y);
      if(b<=k) cnt++;
    }

    cout << cnt << endl;
    return 0;
}
