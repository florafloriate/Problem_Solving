#include<bits/stdc++.h>
#define mod              1000000007
#define INF              1e9
#define pi               acos(-1)
#define ll               long long
#define endl             "\n"
#define F                first
#define S                second
#define bug(x)           cout<<x<<"*"<<endl;
#define mem(name,value)  memset(name, value, sizeof(name))
#define decimal(x)       fixed<<setprecision(x)
#define fastio           ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main()
{
    fastio;

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        if(n>2)
            cout<<"NO"<<endl;
        else
        {
            if(n==1)
                cout<<"YES"<<endl;
            else
            {
                if(s[0]==s[1])
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;
            }
        }

    }
}
