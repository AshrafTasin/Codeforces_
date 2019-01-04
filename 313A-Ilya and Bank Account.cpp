#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin >> a;

    if(a[0]!='-') cout << a;

    else
    {
        b=a;
        a.erase(a.begin()+a.size()-1);
        b.erase(b.begin()+b.size()-2);
        long long int x=stoi(a);
        long long int y=stoi(b);
        cout << max(x,y) << endl;
    }

    return 0;
}

