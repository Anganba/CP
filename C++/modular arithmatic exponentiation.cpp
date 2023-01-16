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
#define M 100001
#define N 101
#define INF 0x7fffffff

typedef long long int lli;

using namespace std;
/*
modular arithmatic exponentiation a^n
*/

lli power(lli a, lli n, lli p)
{
    lli res = 1;
    while (n)
    {
        if (n & 1)
        {
            res = (res * a) % p;
            n--;
        }
        else
        {
            a = (a * a) % p;
            n /= 2;
        }
    }
    return res;
}

int main()
{
#ifdef sxk
    freopen("in.txt", "r", stdin);
#endif
    int n;
    cin >> n;
    cout << power(8, n, 10) << endl;
    return 0;
}
