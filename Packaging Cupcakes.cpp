#include <iostream>
using namespace std;

int main() {
	int t, n, ans = 0;
	cin >> t;
	while(t--){
	    cin >> n;
	    ans = (n/2) + 1;
	    cout << ans << endl;
	}
	return 0;
}
