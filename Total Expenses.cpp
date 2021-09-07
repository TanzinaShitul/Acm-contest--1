#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
{

	double qty, price;
	cin>>qty;
	cin>>price;
	double totalexp=qty*price;
	if(qty<=1000)
    {
      cout<<setprecision(6)<<fixed;
    cout<<totalexp<<endl;
    }
    else if(qty>1000)
	{
		double discount=(totalexp*0.1);
		totalexp=totalexp-discount;
		 cout<<setprecision(6)<<fixed;
    cout<<totalexp<<endl;
	}
}
return 0;
}
