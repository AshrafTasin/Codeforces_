#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,sum=0;
    cin >> n >> m;
    int cur_pos=1;

    while(m--)
    {
        int a;
        cin >> a;
        if(a>=cur_pos) sum=sum+a-cur_pos;
        else sum=sum+n-cur_pos+a;
        cur_pos=a;
    }

    cout << sum << endl;

    return 0;
}
