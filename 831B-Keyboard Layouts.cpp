/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   06.09.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;

int main()
{
    vector<char> v,v1;
    map<char,char> m;

    for(int i=0;i<26;i++)
    {
        char a;
        cin >> a;
        v.pb(a);
    }

    for(int i=0;i<26;i++)
    {
        char a;
        cin >> a;
        v1.pb(a);
    }

    string s;
    cin >> s;

    for(int i=0;i<26;i++) m[v[i]]=v1[i];

    for(int i=0;i<s.size();i++)
    {
        if(isalpha(s[i]))
        {
            if(s[i]>='a' && s[i]<='z') s[i]=m[s[i]];
            else s[i]=toupper(m[tolower(s[i])]);
        }
    }

    cout << s << endl;

    return 0;
}
