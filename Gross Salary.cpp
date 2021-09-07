#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float salary;
        cin>>salary;
        float gross_salary;
        if(salary<1500)
        {
            gross_salary=salary+(salary/10)+(salary*9)/10;

        }
        else if(salary>=1500)
        {
            gross_salary=salary+500+((salary*98)/100);
        }

          cout<<fixed<<setprecision(2)<<gross_salary<<endl;
    }
    return 0;
}
