#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    char a='a';
    string s;
    cin >> n >> s;

    if(s.length()<26) return(cout << "NO",0);

    for(i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
    }
    sort(s.begin(),s.end());

    for(i='a';i<='z';i++)
    {
        if(s.find(a)==string::npos) return(cout << "NO",0);
        a++;
    }

    cout << "YES" << endl;
    return 0;
}
