#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    int n,i;
    map <double,int> m;
    map <double,int> :: iterator it;
    vector<double> v,v1;
    double sum,b,l;

    cin >> n >> l;

    for(int i=0;i<n;i++)
    {
        cin >> b;
        m[b]++;
    }

    for(it=m.begin();it!=m.end();it++) v.pb(it->first);
    if(v.size()==1)
    {
        return(cout << fixed << setprecision(10) << max(abs(v[0]-0),abs(v[0]-l)) << endl,0);
    }

    if(v[0]==0 && v[v.size()-1]==l)
    {
        for(int i=0;i<v.size()-1;i++)
        {
            v1.pb(abs(v[i]-v[i+1]));
        }

        sort(v1.begin(),v1.end());

        cout << fixed << setprecision(10) << v1[v1.size()-1]/2 << endl;
    }

    else if(v[0]==0 && v[v.size()-1]!=l)
    {
        double p=abs(v[v.size()-1]-l);

       for(int i=0;i<v.size()-1;i++)
        {
            v1.pb(abs(v[i]-v[i+1]));
        }

        sort(v1.begin(),v1.end());

        if(p>=v1[v1.size()-1]/2) cout << fixed << setprecision(10) << p << endl;
        else cout << fixed << setprecision(10) << v1[v1.size()-1]/2 << endl;
    }

    else if(v[0]!=0 && v[v.size()-1]==l)
    {
        double p=abs(v[0]-0);
        for(int i=0;i<v.size()-1;i++)
        {
            v1.pb(abs(v[i]-v[i+1]));
        }

        sort(v1.begin(),v1.end());

        if(p>=v1[v1.size()-1]/2) cout << fixed << setprecision(10) << p << endl;
        else cout << fixed << setprecision(10) << v1[v1.size()-1]/2 << endl;
    }

    else
    {
        double p=max(abs(0-v[0]),abs(v[v.size()-1]-l));
        for(int i=0;i<v.size()-1;i++)
        {
            v1.pb(abs(v[i]-v[i+1]));
        }

        sort(v1.begin(),v1.end());

        if(p>=v1[v1.size()-1]/2) cout << fixed << setprecision(10) << p << endl;
        else cout << fixed << setprecision(10) << v1[v1.size()-1]/2 << endl;
    }

    return 0;
}
