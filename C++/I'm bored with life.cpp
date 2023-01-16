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

int main()
{
#ifdef sxk
    freopen("in.txt", "r", stdin);
#endif
    int a, b;
    scanf ( "%d%d", &a, &b );
    int ans = 1;
    for ( int j = 1; j <= min( a, b ); j++ )
    	ans *= j;
    printf ( "%d\n", ans );
    return 0;
}
