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
        ll n,k; cin>>n>>k;

        ll nn=n;
        if(n%2==1)
        {
            for(ll i=2; i*i<=n; i++)
            {
                if(n%i==0)
                {
                    n+=i; break;
                }
            }

            if(nn==n)
                n+=nn;

            k--;
        }

        n=n+(2*k);

        cout<<n<<endl;
    }
}
