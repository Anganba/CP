#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <ctype.h>

#define pi 2 * acos(0.0)
#define M 10000
#define INF 0x7fffffff

typedef long long ll;

using namespace std;
/*
Instead of using n%2 we can use n&1 
because n%2 is similar to n&1 and also 
modulo takes more time than and operator
*/

ll power(int a, int n)
{
    ll res = 1;
    while (n)
    {
        if (n & 1)
            res *= a, n--;
        else
            a *= a, n /= 2;
    }
    return res;
}

ll modularExp(int a, int n, int p)
{
    ll res = 1;
    while (n)
    {
        if (n & 1)
        {
            res = (res * a) % p, n--;
        }
        else
            a = (a * a) % p, n /= 2;
    }
    return res;
}

int main()
{
#ifdef sxk
    freopen("in.txt", "r", stdin);
#endif
    int n, a, p;
    cin >> a >> n >> p;
    cout << "Power: " << power(a, n) << endl;
    cout << "Modular Exponentiation: " << modularExp(a, n, p) << endl;

    return 0;
}
