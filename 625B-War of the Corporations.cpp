/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   01.11.18   |
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


/*King  Moves

int dx[]={-1,1,-1,0,1,-1,0,1};
int dy[]={0,0,-1,-1,-1,1,1,1};    */

/*Knight Moves

int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 }; */

/*Normal Moves

int x[] = {0, 1, 0, -1};
int y[] = {-1, 0, 1, 0}; */



void lps(string pat, int f[])
{
    int m=pat.size();
    f[0]=-1;
    int k;

    for(int i=1;i<m;i++)
    {
        k=f[i-1];

        while(k>=0)
        {
            if(pat[k]==pat[i-1]) break;
            else k=f[k];
        }

        f[i]=k+1;
    }
}


int kmp(string tar,string pat)
{
    int n=tar.size();
    int m=pat.size();
    int f[m];
    int cnt=0;

    lps(pat,f);

    int i=0;
    int k=0;

    while(i<n)
    {
        if(k==-1)
        {
            i++;
            k=0;
        }

        else if(tar[i]==pat[k])
        {
            i++;
            k++;

            if(k==m)
            {
                cnt++;
                k=0;
            }
        }

        else  k=f[k];
    }

    return cnt;
}


int main()
{
    string tar,pat;
    cin >> tar >> pat;

    cout << kmp(tar,pat) << endl;
}
