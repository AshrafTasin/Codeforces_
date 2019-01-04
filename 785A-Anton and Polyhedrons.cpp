#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        string a;
        cin >> a;
        if(a=="Tetrahedron") sum+=4;
        if(a=="Cube") sum+=6;
        if(a=="Octahedron") sum+=8;
        if(a=="Dodecahedron") sum+=12;
        if(a=="Icosahedron") sum+=20;
    }

    cout << sum << endl;

    return 0;
}

