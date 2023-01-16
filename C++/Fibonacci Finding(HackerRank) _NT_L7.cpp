#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <ctype.h>

#define REP(i, n) for (int i = 1; i <= n; i++)
#define pi 2 * acos(0.0)
#define M 10000
#define N 101
#define INF 0x7fffffff

typedef long long int lli;

using namespace std;
/*
Matrix Exponentiation
*/
lli mod = 1e9 + 7;
lli ar[3];
lli I[3][3], T[3][3];
void mul(lli A[3][3], lli B[3][3], int dim)
{
    lli res[dim + 1][dim + 1];
    REP(i, dim)
    REP(j, dim)
    {
        res[i][j] = 0;
        REP(k, dim)
        {
            lli x = (A[i][k] * B[k][j]) % mod;
            res[i][j] = (res[i][j] + x) % mod;
        }
    }
    REP(i, dim)
    REP(j, dim) A[i][j] = res[i][j];
}

lli getFib(int n)
{
    if (n <= 2)
        return ar[n];
    I[1][1] = I[2][2] = 1;
    I[1][2] = I[2][1] = 0;

    T[1][1] = 0;
    T[1][2] = T[2][1] = T[2][2] = 1;

    n = n - 1;
    while (n)
    {
        if (n % 2)
            mul(I, T, 2), n--;
        else
            mul(T, T, 2), n /= 2;
    }
    lli Fn = (ar[1] * I[1][1] + ar[2] * I[2][1]) % mod;
    return Fn;
}

int main()
{
#ifdef sxk
    freopen("in.txt", "r", stdin);
#endif
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> ar[1] >> ar[2] >> n, n++;
        cout << getFib(n) << endl;
    }

    return 0;
}
