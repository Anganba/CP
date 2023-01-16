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

*/
int is_prime[1000001];
int maxN = 1000000;

void sieve()
{
    for (int i = 1; i <= maxN; i++)
        is_prime[i] = 1;
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i * i <= maxN; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= maxN; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }
}

int main()
{
#ifdef sxk
    freopen("in.txt", "r", stdin);
#endif
    for (int i = 0; i < maxN; i++)
    {
        cout << is_prime[i] << " ";
    }
    return 0;
}
