#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <math.h>
#include <ctype.h>
#include <bitset>

#define pi 2 * acos(0.0)
#define M 100000

using namespace std;
/*
 
*/

int main()
{
    int n, m;
    cin >> n;
    if (n % 2 == 0)
    {
        m = n / 2;
        if (m % 2 == 0)
            cout << m << " " << m << endl;
        else
            cout << m - 1 << " " << m + 1 << endl;
    }
    else
        cout << 9 << " " << n - 9 << endl;
    return 0;
}