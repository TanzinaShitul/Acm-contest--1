#include<iostream>
using namespace std;
int main() {
   int T;
   cin>>T;
   for(int i=0;i<T;i++) {
      int N;
      cin>>N;
      int sum=0;
      while(N>0) {
         int s = N%10;
         sum+=s;
         N/=10;
         }
      cout<<sum<<endl;
      }
   }
