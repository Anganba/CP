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
Fibonnaci Number using Dynamic Programming ->Memoized
Time Complexity : O(n)
Space Complexity: O(n)
*/

lli fib(int n, vector<lli> &memo)
{
    if (n <= 2)
        return 1;
    if (memo[n] != 0)
        return memo[n];
    memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
    return memo[n];
}

int main()
{
    vector<lli> memo(101);
    int n;
    cin >> n;
    cout << fib(n, memo) << endl;
    return 0;
}
