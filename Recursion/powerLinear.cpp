#include <iostream>
using namespace std;

int power(int x, int n)
{
    // write your code here
    // E ==> p (2,5) = 2.2.2.2.2
    // F ==> p(2,4) = 2.2.2.2
    // ewf ==> p(2,5) = p(2,4) .2
    if (n == 0)
        return 1;
    int xpnm1 = power(x, n - 1);
    int xpn = xpnm1 * x;
    return xpn;
}

int main()
{
    int n, x;
    cin >> x >> n;
    cout << power(x, n);
}
