#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;

bool sr(const pair<long long int,long long int> &a,const pair <int,int> &b)
{
    return(a.second<b.second);
}

int main()
{
    long long int exam,grade,avg,a,b,f,sum=0,i=0,e,out=0;
    vector < pair<long long int,long long int> > v;
    cin >> exam >> grade >> avg;
    e=exam*avg;

    while(exam--)
    {
       cin >> a >> b;
       sum+=a;
       v.pb(mp(a,b));
    }


    sort(v.begin(),v.end(),sr);

    while(e>sum)
    {
        f=min(e-sum,grade-v[i].first);
        out=out+f*v[i].second;
        sum=sum+f;
        i++;
    }

    cout << out << endl;

    return 0;
}
