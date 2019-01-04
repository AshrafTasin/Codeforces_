/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   31.10.18   |
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
    int evo,ivo,dam;
    cin >> evo >> ivo >> dam;


    if(evo>dam && ivo>dam) return(cout << "No" << endl,0);

    if(evo==dam || ivo==dam) return(cout << "Yes" << endl,0);

    if(evo>dam && ivo<dam && dam%ivo==0) return(cout << "Yes" << endl,0);

    if(ivo>dam && evo<dam && dam%evo==0) return(cout << "Yes" << endl,0);

    if(evo<dam and ivo <dam and (dam%evo==0 or dam%ivo==0)) return(cout << "Yes" << endl,0);

    if(evo < ivo) swap(evo,ivo);

    while(1)
    {
        dam-=evo;

        if(dam<0) return(cout << "No" << endl,0);
        if(dam%ivo==0) return(cout << "Yes" << endl,0);

    }

}
