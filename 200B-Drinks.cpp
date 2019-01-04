#include<bits/stdc++.h>
#define pb push_back
#define ll long long

using namespace std;

int main()
{
    int n,p;
    double sum=0;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> p;
        sum+=p;
    }

    sum=sum/n;

    cout << fixed << setprecision(13) << sum << endl;

    return 0;

}
