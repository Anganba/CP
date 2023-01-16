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

bool checkTriangle(int a, int b, int c)
{
    // check condition
    if (a + b <= c || a + c <= b || b + c <= a)
        return false;
    else
        return true;
}

int main()
{
#ifdef sxk
    freopen("in.txt", "r", stdin);
#endif
    int test;
    cin >> test;
    while (test--)
    {
        int ar[M];
        bool flag = true;
        int n, tmp;
        cin >> n;
        REP(i, n)
            cin >> ar[i];
        if (!checkTriangle(ar[1], ar[2], ar[n]))
        {
            cout << 1 << " " << 2 << " " << n << endl;
        }
        else
            cout << "-1" << endl;
    }

    return 0;
}
