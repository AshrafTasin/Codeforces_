/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   26.07.19   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define flash ios :: sync_with_stdio(false); cin.tie(NULL);
#define db double
#define endl "\n"
#define mnm pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;


/*King  Moves

int dx[]={-1,1,-1,0,1,-1,0,1};
int dy[]={0,0,-1,-1,-1,1,1,1};    */

/*Knight Moves

int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 }; */

/*Normal Moves

int x[] = {0, 1, 0, -1};
int y[] = {-1, 0, 1, 0}; */

int main()
{
    flash

    int q;
    cin >> q;

    while(q--)
    {
        ll n,k;
        cin >> n >> k;

        ll odd=0,cnt=0;
        ll ar[n+10];
        vector<ll> v;

        for(ll i=0;i<n;++i)
        {
            ll x;
            cin >> x;
            ar[i]=x;
            if(x%2) ++odd;
            cnt+=x;
        }

        if(odd<k or odd==0 or odd%2!=k%2) {cout << "NO" << endl;continue;}

        if(k==1)
        {
            if(cnt%2!=0) cout << "YES" << endl << n << endl;
            else cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        for(ll i=0;i<n;++i)
        {
            if(k==1) break;
            if(ar[i]%2) {cout << i+1 << " ";--k;}
        }

        cout << n << endl;

    }

}
