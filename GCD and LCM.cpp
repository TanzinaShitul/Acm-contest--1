#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long a,b,ans,s;
        cin>>a>>b;
        ans=__gcd(a,b);
        s=(a*b)/__gcd(a,b);
        cout<<ans<<" "<<s<<endl;
    }
}
