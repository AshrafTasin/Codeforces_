/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   09.09.18   |
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
    int j,a;
    cin >> a;
    int s=a*2;

    for(int i=0;i<a+1;i++)
    {
        for(int p=1;p<=s;p++) cout << " ";
        s-=2;

        if(i==0) cout << "0";

        else
        {
            for(j=0;j<=i;j++)
            {
                cout << j << " ";

            }
            j-=2;

            for(int k=j;k!=-1;k--)
            {
                cout << k;
                if(k==0) break;
                cout << " ";
            }
        }

        cout << endl;
    }

    int flag=2;

    for(int i=a-1;i>=0;i--)
    {
        for(int p=1;p<=flag;p++) cout << " ";
        flag+=2;

        if(i==0) cout << "0";

        else
        {
            for(int j=0;j<=i;j++) cout << j << " ";
            j--;

            for(int k=j;k>=0;k--)
                {
                    cout << k;
                    if(k==0) break;
                    cout << " ";
                }
        }

        cout << endl;

    }

    return 0;
}
