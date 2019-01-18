/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   15.01.19   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define flash ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
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

    string s;
    map<char,char> m;
    map<char,char> :: iterator it;


    m.insert({')','('});
    m.insert({'}','{'});
    m.insert({']','['});
    m.insert({'>','<'});

   //for(it=m.begin();it!=m.end();it++) cout << it->first << " " << it->second << endl;

    cin >> s;
    stack<char> stc;
    int sz=s.size();
    int cnt=0;

    for(int i=0;i<sz;i++)
    {
        //cout << "P" << endl;
        if(s[i]=='(' or s[i]=='{' or s[i]=='[' or s[i]=='<')
                {
                    stc.push(s[i]);
                    //cout << "Push" << endl;
                }

        if(s[i]==')' or s[i]=='}' or s[i]==']' or s[i]=='>')
        {
            if(stc.empty())  return(cout << "Impossible" << endl,0);

            else
            {
                char x=stc.top();
                if(x!=m[s[i]]) cnt++;
                stc.pop();
                //cout << "Pop" << endl;
            }


        }
    }

    if(stc.empty()==true) cout << cnt << endl;
    else cout << "Impossible" << endl;

    return 0;
}
