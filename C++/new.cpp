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
#define INF 0x7fffffff
#define M 100001
#define N 101

typedef long long int lli;

using namespace std;
/*
Sieve Method for DS
*/

int Crossout(int arr[], int n, int k)
{
    if (arr[k] == 1)
        return 1;
    for (int L = 2 * k; L <= n; L += k)
    {
        arr[L] = 1;
    }
    return 1;
}

int main()
{
    int arr[100], K, n = 50;
    for (int K = 1; K <= n; K++)
    {
        arr[K] = K;
    }
    for (int K = 2; K <= sqrt(n); K++)
    {
        Crossout(arr, n, K);
    }
    for (int K = 1; K <= N; K++)
    {
        if (arr[K] != 1)
        {
            cout << arr[K] << endl;
        }
    }
    return 0;
}
