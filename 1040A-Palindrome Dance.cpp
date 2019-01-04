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
    int cnt=0,n,w,b;
    cin >> n >> w >> b;

    stack <int> s;
    queue <int> q;

    if(n%2!=0)
    {
        for(int i=1;i<=n/2;i++)
        {
            int x;
            cin >> x;
            s.push(x);
        }

        int t;
        cin >> t;

        for(int i=n/2+2;i<=n;i++)
        {
            int y;
            cin >> y;
            q.push(y);
        }

        while(!q.empty())
        {
            if((q.front()==1 && s.top()==0) || (s.top()==1 && q.front()==0)) return(cout << -1 << endl,0);
            else if(q.front()==2 && s.top()==2)
            {
                cnt+=min(b,w)*2;
                q.pop();
                s.pop();
            }
            else if((q.front()==1 && s.top()==2) || (s.top()==1 && q.front()==2))
            {
                cnt+=b;
                q.pop();
                s.pop();
            }
            else if((q.front()==0 && s.top()==2) || (s.top()==0 && q.front()==2))
            {
                cnt+=w;
                q.pop();
                s.pop();
            }
            else
            {
                q.pop();
                s.pop();
            }
        }
        if(t==2) cnt+=min(w,b);
        cout << cnt << endl;
    }

    else
    {
        for(int i=1;i<=n/2;i++)
        {
            int x;
            cin >> x;
            s.push(x);
        }

        for(int i=n/2+1;i<=n;i++)
        {
            int t;
            cin >> t;
            q.push(t);
        }

        while(!q.empty())
        {
            if((q.front()==1 && s.top()==0) || (s.top()==1 && q.front()==0)) return(cout << -1 << endl,0);
            else if(q.front()==2 && s.top()==2)
            {
                cnt+=min(b,w)*2;
                q.pop();
                s.pop();
            }
            else if((q.front()==1 && s.top()==2) || (s.top()==1 && q.front()==2))
            {
                cnt+=b;
                q.pop();
                s.pop();
            }
            else if((q.front()==0 && s.top()==2) || (s.top()==0 && q.front()==2))
            {
                cnt+=w;
                q.pop();
                s.pop();
            }
            else
            {
                q.pop();
                s.pop();
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
