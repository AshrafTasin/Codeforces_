#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,b,sum=0;
    cin >> n;

    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    for(int i=2;i<=n;i++)
    {
        sum=i+(n-i);
        if(prime[i]==false && prime[n-i]==false)
        {
            cout << i << " " << n-i << endl;
            break;
        }
    }

    return 0;
}

