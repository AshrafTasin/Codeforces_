/*-----------------------|
| Author : Ashraf Tasin  |
| Date   : 02.08.2018    |
|-----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;

int main()
{
    int a;
    string s;
    map<string,int> m;
    map<string,int> :: iterator it;

    cin >> a >> s;

    for(int i=0;i<a-1;i++)
    {
        string a={s[i],s[i+1]};
        m[a]++;
    }

    int val=m.begin()->second;
    for(it=next(m.begin());it!=m.end();it++)
    {
        if(it->second > val) val=it->second;
    }

    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second==val) return(cout << it->first << endl,0);
    }

    return 0;
}

