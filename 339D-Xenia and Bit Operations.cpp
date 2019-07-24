/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   13.07.19   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define int long long
#define ll long long
#define all v.begin(),v.end()
#define flash ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define db double
#define endl "\n"
#define mnm pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
#define eps 1e-6
#define mx 150007
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

int n,q;
int ar[mx];
int tree[4*mx];
int height;

void build(int node,int l,int r,int h)
{
    if(l==r)
    {
        tree[node]=ar[l];
        return;
    }

    int mid=(l+r)>>1;
    build(node*2,l,mid,h-1);
    build(node*2+1,mid+1,r,h-1);

    if(h&1) tree[node]=tree[node*2] | tree[node*2+1];
    else tree[node]=tree[node*2] ^ tree[node*2+1];
}


void query(int node,int l,int r,int i,int val,int h)
{
    if(l==r and r==i)
    {
        tree[node]=val;
        return;
    }

    if(i<l || i>r) return;

    int mid=(l+r)>>1;
    query(node*2,l,mid,i,val,h-1);
    query(node*2+1,mid+1,r,i,val,h-1);

    if(h&1)  tree[node]=tree[node*2] | tree[node*2+1];
    else  tree[node]=tree[node*2] ^ tree[node*2+1];

}


int32_t main()
{
    flash

    cin >> n >> q;
    height=n;
    n=1<<n;

    for(int i=1;i<=n;++i) cin >> ar[i];
    build(1,1,n,height);

    while(q--)
    {
        int l,x;
        cin >> l >> x;
        query(1,1,n,l,x,height);
        cout << tree[1] << endl;
    }

    return 0;
}
