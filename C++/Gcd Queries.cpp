#include <iostream>
#include <string>
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
#define INF 0x7fffffff
#define M 100001
#define N 101

typedef long long int lli;

using namespace std;
/*

*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 10];
        int forward[n + 10];
        int backward[n + 10];
        forward[0] = backward[n + 1] = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; ++i)
        {
            forward[i] = __gcd(forward[i - 1], a[i]);
        }
        for (int i = n; i >= 1; --i)
        {
            backward[i] = __gcd(backward[i + 1], a[i]);
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int gc = 0;
            cout << __gcd(forward[l - 1], backward[r + 1]) << endl;
        }
    }

    return 0;
}
