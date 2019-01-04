#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    cin >> a >> b >> c;

    a=a+b;

    sort(c.begin(),c.end());
    sort(a.begin(),a.end());

    if(c.compare(a)==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
