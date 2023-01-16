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
void primeFact(int N)
{
    //To find prime divisor to divide N
    for (int i = 2; i * i <= N; i++)
    {
        //Got Prime divisor
        if (N % i == 0)
        {
            int cnt = 0;
            while (N % i == 0)
                cnt++, N /= i;
            cout << i << "^" << cnt << endl;
        }
    }
    //If N is itself prime number
    if (N > 1)
        cout << N << "^" << 1 << endl;
}

int main()
{
#ifdef sxk
    freopen("in.txt", "r", stdin);
#endif
    int n;
    cin >> n;
    primeFact(n);
    return 0;
}
