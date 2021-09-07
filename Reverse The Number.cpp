#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=0,b=0,c=0;
        while(n>0){
            a=n%10;
            c=(c*10)+a;
            n=n/10;
        }
        cout<<c<<endl;
    }
	return 0;
}
