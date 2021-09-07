#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;
        int ldi = num % 10;

        while(num > 9)
        {
            num /= 10;
        }
        int fdi = num % 10;
        cout << ldi + fdi << "\n";
    }
    return 0;
}
