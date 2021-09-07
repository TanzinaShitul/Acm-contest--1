#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	int n;
	while(t--){
	    int  counter=0;
	    cin>>n;
	    int arr[6]= {100,50,10,5,2,1};
	    for(int i=0;i<6; i++){
	        while(n>=arr[i]){
	            n = n - arr[i];
	            counter ++;

	        }

	    }
	    cout<<counter<<endl;


	}
	return 0;
}
