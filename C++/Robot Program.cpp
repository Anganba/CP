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

int main()
{
#ifdef sxk
    freopen("in.txt", "r", stdin);
#endif
    int t, x, y, diff;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        int sum = 0;
        diff = abs(x - y);
        if (diff < 2)
        {
            if (x < y)
            {
                y--;
                sum++;
            }
            if (y < x)
            {
                x--;
                sum++;
            }
            sum += (x + y);
        }
        else
        {
            if (y > x)
            {
                y = y - x;
                sum = (x * 2) + (y - 1) * 2 + 1;
            }
            else
            {
                x = x - y;
                sum = (y * 2) + (x - 1) * 2 + 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
