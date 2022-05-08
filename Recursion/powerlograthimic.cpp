#include <iostream>
using namespace std;

int powerLogarithmic(int x, int n)
{
    // write your code here
    if (n == 0)
        return 1;
    int xpb2 = powerLogarithmic(x, n / 2);
    int xpn = xpb2 * xpb2;
    if (n % 2 == 1)
    {
        xpn = xpn * x;
    }
    return xpn;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << powerLogarithmic(x, n);
}