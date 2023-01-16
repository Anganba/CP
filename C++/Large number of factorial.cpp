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
//Calculating GCD
// lli GCD(lli A,lli B){
//     if(B==0)return A;
//     else return GCD(B,A%B);
// }
//Calculating Factorial
// lli factorial(lli n){
//     if(n==0||n==1)return 1;
//     else
//     return n*factorial(n-1);
// }
#define MAX 500

int multiply(int x, int res[], int res_size);

void factorial(int n)
{
    int res[MAX];

    res[0] = 1;
    int res_size = 1;

    for (int x = 2; x <= n; x++)
    {
        res_size = multiply(x, res, res_size);
    }

    cout << "Factorial of given number is \n";
    for (int i = res_size - 1; i >= 0; i--)
        cout << res[i];
}

int multiply(int x, int res[], int res_size)
{
    int carry = 0;

    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

int main()
{
    factorial(100);
    return 0;
}