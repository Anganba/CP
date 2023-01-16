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

int ar[N][N], I[N][N];
lli mod = 1e9 + 7;

void mul(int A[][N], int B[][N], int dim)
{
    int res[dim + 1][dim + 1];
    REP(i, dim)
    {
        REP(j, dim)
        {
            res[i][j] = 0;
            REP(k, dim)
            res[i][j] = (res[i][j] % mod + ((A[i][k] % mod) * (B[k][j] % mod) % mod)) % mod; //matrix multiplication
        }
    }
    REP(i, dim)
    REP(j, dim)
    A[i][j] = res[i][j];
}

void power(int A[][N], int dim, int n)
{
    //For Identity Matrix
    REP(i, dim)
    REP(j, dim)
    {
        if (i == j)
            I[i][j] = 1;
        else
            I[i][j] = 0;
    }
    //REP(i, n)
    //mul(I, A, dim);
    //that was naive approach,
    //below is binary exponentiation approach for logn time complexity
    while (n)
    {
        if (n % 2)
            mul(I, A, dim), n--;
        else
            mul(A, A, dim), n /= 2;
    }

    REP(i, dim)
    REP(j, dim)
    A[i][j] = I[i][j];
}

void printMat(int A[][N], int dim)
{
    REP(i, dim)
    {
        REP(j, dim)
        cout << A[i][j] << ' ';
        cout << endl;
    }
}

int main()
{
#ifdef sxk
    freopen("in.txt", "r", stdin);
#endif
    int t, dim, n;
    cin >> t;
    while (t--)
    {
        cin >> dim >> n;
        REP(i, dim)
        REP(j, dim)
        cin >> ar[i][j];
        power(ar, dim, n);
        printMat(ar, dim);
    }

    return 0;
}
