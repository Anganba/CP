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
#define INF 0x7fffffff

typedef long long int lli;

using namespace std;

/*

*/
int power(int a, int n, int m)
{
    int res = 1;
    while (n)
    {
        if (n % 2)
            res = (res * a) % m;
        n /= 2;
        a = (a * a) % m;
    }
    return res;
}

int main()
{
    int t, a, b, m;
    cin >> t;
    while (t--)
    {
        cin >> a >> m;
        cout << "a^-1 = " << power(a, m - 2, m) << endl;
    }
    return 0;
}