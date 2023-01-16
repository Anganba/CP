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
int GCD(int a, int b)
{
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}

int main()
{
#ifdef sxk
    freopen("in.txt", "r", stdin);
#endif
    int a, b, n, tmp;
    cin >> a >> b >> n;
    while (n)
    {
        tmp = GCD(a, n);
        n -= tmp;
        if (n == 0)
        {
            cout << "0" << endl;
            break;
        }
        tmp = GCD(b, n);
        n -= tmp;
        if (n == 0)
        {
            cout << "1" << endl;
            break;
        }
    }

    return 0;
}
