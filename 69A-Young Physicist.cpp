#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    int n,i,x,sum=0,sum1=0,sum2=0;
    vector <int> v;
    cin >> n;
    for(i=0;i<n*3;i++)
    {
        cin >> x;
        v.pb(x);
    }

    for(i=0;i<n*3;i=i+3) sum=sum+v[i];
    for(i=1;i<n*3;i=i+3) sum1=sum1+v[i];
    for(i=2;i<n*3;i=i+3) sum2=sum2+v[i];


    if(sum1==0 && sum==0 && sum2==0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
