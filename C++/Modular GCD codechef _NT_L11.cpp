#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <math.h>
#include <ctype.h>

#define REP(i, n) for (int i = 1; i <= n; i++)
#define REP0(i, n) for (int i = 0; i < n; i++)
#define pi 2 * acos(0.0)
#define mod 1000000007
#define M 100001
#define N 101
#define INF 0x7fffffff

typedef long long int lli;

using namespace std;
/*

*/
lli power(lli a, lli n, lli d)
{
    //Modular exponentiation
    lli res = 1;
    while (n)
    {
        if (n % 2 == 1)
        {
            res = ((res % d) * (a % d)) % d;
            n--;
        }
        else
        {
            a = ((a % d) * (a % d)) % d;
            n /= 2;
        }
    }
    return res;
}

lli GCD(lli A, lli B, lli n)
{
    if (A == B)
    {
        return (power(A, n, mod) + power(B, n, mod)) % mod;
    }
    lli candidate = 1;
    lli num = A - B;
    for (lli i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            lli temp = (power(A, n, i) + power(B, n, i)) % i;
            if (temp == 0)
                candidate = max(candidate, i);

            temp = (power(A, n, num / i) + power(B, n, num / i)) % (num / i);
            if (temp == 0)
                candidate = max(candidate, num / i);
        }
    }
    return candidate;
}

int main()
{
#ifdef sxk
    freopen("in.txt", "r", stdin);
#endif
    lli A, B, n, t;
    cin >> t;
    while (t--)
    {
        cin >> A >> B >> n;
        cout << GCD(A, B, n) << endl;
    }
    return 0;
}
