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

typedef long long int lli;

using namespace std;
/*

*/
int ar[1000001];
int pp[1000001];

void sieve()
{
    int maxN = 1000000;
    for (lli i = 0; i <= maxN; i++)
    {
        ar[i] = 1;
    }
    ar[0] = ar[1] = 0;
    for (lli i = 2; i * i <= maxN; i++)
    {
        if (ar[i] == 1)
        {
            for (lli j = i * i; j <= maxN; j += i)
            {
                ar[j] = 0;
            }
        }
    }

    int cnt = 0;

    for (lli i = 0; i <= maxN; i++)
    {
        if (ar[i] == 1)
            cnt++;
        if (ar[cnt] == 1)
            pp[i] = 1;
        else
            pp[i] = 0;
    }
    for (lli i = 0; i <= maxN; i++)
    {
        pp[i] += pp[i - 1];
    }
}

int main()
{
#ifdef sxk
    freopen("in.txt", "r", stdin);
#endif
    sieve();
    int L, R, t;
    cin >> t;
    while (t--)
    {
        cin >> L >> R;
        int cnt = pp[R] - pp[L - 1];
        cout << cnt << endl;
    }

    return 0;
}
