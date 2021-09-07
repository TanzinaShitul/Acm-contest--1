#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        float a,b,c;
        cin>>a>>b>>c;

        int k;

        if(a>50 && b<0.7 && c>5600)
        k=10;
        else
        if(a>50 && b<0.7 && c<=5600)
        k=9;
        else
        if(a<=50 && b<0.7 && c>5600)
        k=8;
        else
        if(a>50 && b>=0.7 && c>5600)
        k=7;
        else
        if(a>50 || b<0.7 || c>5600)
        k=6;
        else
        k=5;

        cout<<k<<endl;

    }

	return 0;
}
