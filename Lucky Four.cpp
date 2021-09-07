#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='4')
                count++;
        }
        cout<<count<<endl;
    }
}
