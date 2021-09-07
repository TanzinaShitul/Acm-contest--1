#include <iostream>
using namespace std;
int main()
{
    int sum = 0, j, n, k;
    cin >> n >> k;
     while(n--)
{
        cin >> j;
        if (j % k == 0)
            sum += 1;
    }
    cout << sum << endl;
    return 0;
}
