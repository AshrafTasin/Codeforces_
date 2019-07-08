/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   05.07.19   |
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


const int mx = 100011;
int arr[mx],lazy[4*mx],tree[4*mx];
int n;


void build(int node,int left, int right)
{
    if(left==right)
    {
        tree[node]=arr[left];
        return;
    }

    int mid=(left+right)/2;

    build(node<<1,left,mid);
    build((node<<1)+1,mid+1,right);

    tree[node]=tree[node<<1]+tree[(node<<1)+1];
}


void update(int node,int left,int right,int val)
{
    lazy[node]+=val;
    tree[node]+=((right-left)+1)*val;
}


void shift(int node,int left,int right)
{
    int mid=(left+right)/2;
    update(node<<1,left,mid,lazy[node]);
    update((node<<1)+1,mid+1,right,lazy[node]);
    lazy[node]=0;
}


void increase(int left_range,int right_range,int val,int node=1,int left=1,int right=n)
{
    if(left_range>right or right_range<left) return;

    if(left_range<=left and right_range>=right)
    {
        update(node,left,right,val);
        return;
    }

    shift(node,left,right);

    int mid=(left+right)/2;

    increase(left_range,right_range,val,(node<<1),left,mid);
    increase(left_range,right_range,val,((node<<1)+1),mid+1,right);

    tree[node]=tree[(node<<1)]+tree[(node<<1)+1];
}



int sum(int left_range,int right_range, int node=1,int left=1,int right=n)
{
    if(left_range>right or right_range<left) return 0;

    if(left_range<=left and right_range>=right) return tree[node];

    shift(node,left,right);

    int mid=(left+right)/2;

    int l=sum(left_range,right_range,(node<<1),left,mid);
    int r=sum(left_range,right_range,((node<<1)+1),mid+1,right);

    return l+r;
}


int main()
{
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        int x;
        cin >> x;
        arr[i]=x%10;
    }

    build(1,1,n);

    int q;
    cin >> q;

    while(q--)
    {
        int l,r;
        cin >> l >> r;
        cout << sum(l,r)/10 << endl;
    }

    return 0;
}
