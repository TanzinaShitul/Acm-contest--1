#include<bits/stdc++.h>
using namespace std;
int ar[1000001] = {0};

int main()
{
  int i,j;
  cin>>j;

  int x;

  for (i=0;i<j;i++)
    {
    cin>>x;
    ar[x]++;
  }

  for (i=0;i<1000001;i++){
    while(ar[i]>0){
      cout<<i<<endl;
      ar[i]--;
    }
  }

return 0;
}
