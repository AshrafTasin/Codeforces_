/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   05.09.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
using namespace std;

int main()
{
    stack<int> s;
    queue<int> q;
    int n,a,cnt=0;

    cin >> n >> a;

    for(int i=1;i<=a;i++)
    {
        int p;
        cin >> p;
        s.push(p);
    }

    if(s.top()==1) cnt++;
    s.pop();

    for(int i=a+1;i<=n;i++)
    {
        int p;
        cin >> p;
        q.push(p);
    }

    if(q.size()>s.size())
    {
        while(!s.empty())
        {
            if(s.top()==1 && q.front()==1) cnt+=2;
            s.pop();
            q.pop();
        }

        while(!q.empty())
        {
            if(q.front()==1) cnt++;
            q.pop();
        }

        cout << cnt << endl;
    }

    else
    {
        while(!q.empty())
        {
            if(q.front()==1 && s.top()==1) cnt+=2;
            s.pop();
            q.pop();
        }

        while(!s.empty())
        {
            if(s.top()==1) cnt++;
            s.pop();
        }

        cout << cnt << endl;
    }

    return 0;
}
